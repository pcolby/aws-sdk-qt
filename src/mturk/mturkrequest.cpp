/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "mturkrequest.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::MTurkRequest
 * \brief The MTurkRequest class provides an interface for MTurk requests.
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * \enum MTurkRequest::Action
 *
 * This enum describes the actions that can be performed as MTurk
 * requests.
 *
 * \value AcceptQualificationRequestAction MTurk AcceptQualificationRequest action.
 * \value ApproveAssignmentAction MTurk ApproveAssignment action.
 * \value AssociateQualificationWithWorkerAction MTurk AssociateQualificationWithWorker action.
 * \value CreateAdditionalAssignmentsForHITAction MTurk CreateAdditionalAssignmentsForHIT action.
 * \value CreateHITAction MTurk CreateHIT action.
 * \value CreateHITTypeAction MTurk CreateHITType action.
 * \value CreateHITWithHITTypeAction MTurk CreateHITWithHITType action.
 * \value CreateQualificationTypeAction MTurk CreateQualificationType action.
 * \value CreateWorkerBlockAction MTurk CreateWorkerBlock action.
 * \value DeleteHITAction MTurk DeleteHIT action.
 * \value DeleteQualificationTypeAction MTurk DeleteQualificationType action.
 * \value DeleteWorkerBlockAction MTurk DeleteWorkerBlock action.
 * \value DisassociateQualificationFromWorkerAction MTurk DisassociateQualificationFromWorker action.
 * \value GetAccountBalanceAction MTurk GetAccountBalance action.
 * \value GetAssignmentAction MTurk GetAssignment action.
 * \value GetFileUploadURLAction MTurk GetFileUploadURL action.
 * \value GetHITAction MTurk GetHIT action.
 * \value GetQualificationScoreAction MTurk GetQualificationScore action.
 * \value GetQualificationTypeAction MTurk GetQualificationType action.
 * \value ListAssignmentsForHITAction MTurk ListAssignmentsForHIT action.
 * \value ListBonusPaymentsAction MTurk ListBonusPayments action.
 * \value ListHITsAction MTurk ListHITs action.
 * \value ListHITsForQualificationTypeAction MTurk ListHITsForQualificationType action.
 * \value ListQualificationRequestsAction MTurk ListQualificationRequests action.
 * \value ListQualificationTypesAction MTurk ListQualificationTypes action.
 * \value ListReviewPolicyResultsForHITAction MTurk ListReviewPolicyResultsForHIT action.
 * \value ListReviewableHITsAction MTurk ListReviewableHITs action.
 * \value ListWorkerBlocksAction MTurk ListWorkerBlocks action.
 * \value ListWorkersWithQualificationTypeAction MTurk ListWorkersWithQualificationType action.
 * \value NotifyWorkersAction MTurk NotifyWorkers action.
 * \value RejectAssignmentAction MTurk RejectAssignment action.
 * \value RejectQualificationRequestAction MTurk RejectQualificationRequest action.
 * \value SendBonusAction MTurk SendBonus action.
 * \value SendTestEventNotificationAction MTurk SendTestEventNotification action.
 * \value UpdateExpirationForHITAction MTurk UpdateExpirationForHIT action.
 * \value UpdateHITReviewStatusAction MTurk UpdateHITReviewStatus action.
 * \value UpdateHITTypeOfHITAction MTurk UpdateHITTypeOfHIT action.
 * \value UpdateNotificationSettingsAction MTurk UpdateNotificationSettings action.
 * \value UpdateQualificationTypeAction MTurk UpdateQualificationType action.
 */

/*!
 * Constructs a MTurkRequest object for MTurk \a action.
 */
MTurkRequest::MTurkRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MTurkRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MTurkRequest::MTurkRequest(const MTurkRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MTurkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MTurkRequest object to be equal to \a other.
 */
MTurkRequest& MTurkRequest::operator=(const MTurkRequest &other)
{
    Q_D(MTurkRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MTurkRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MTurkRequestPrivate.
 */
MTurkRequest::MTurkRequest(MTurkRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MTurk action to be performed by this request.
 */
MTurkRequest::Action MTurkRequest::action() const
{
    Q_D(const MTurkRequest);
    return d->action;
}

/*!
 * Returns the name of the MTurk action to be performed by this request.
 */
QString MTurkRequest::actionString() const
{
    return MTurkRequestPrivate::toString(action());
}

/*!
 * Returns the MTurk API version implemented by this request.
 */
QString MTurkRequest::apiVersion() const
{
    Q_D(const MTurkRequest);
    return d->apiVersion;
}

/*!
 * Sets the MTurk action to be performed by this request to \a action.
 */
void MTurkRequest::setAction(const Action action)
{
    Q_D(MTurkRequest);
    d->action = action;
}

/*!
 * Sets the MTurk API version to include in this request to \a version.
 */
void MTurkRequest::setApiVersion(const QString &version)
{
    Q_D(MTurkRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool MTurkRequest::operator==(const MTurkRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MTurk queue name.
 *
 * @par From MTurk FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MTurk queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MTurkRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MTurkRequest::clearParameter(const QString &name)
{
    Q_D(MTurkRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MTurkRequest::clearParameters()
{
    Q_D(MTurkRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MTurkRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MTurkRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MTurkRequest::parameters() const
{
    Q_D(const MTurkRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MTurkRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MTurkRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MTurkRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MTurkRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MTurk request using the given
 * \a endpoint.
 *
 * This MTurk implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MTurkRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MTurkRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MTurk::MTurkRequestPrivate
 * \brief The MTurkRequestPrivate class provides private implementation for MTurkRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a MTurkRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
MTurkRequestPrivate::MTurkRequestPrivate(const MTurkRequest::Action action, MTurkRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MTurkRequest class's copy constructor.
 */
MTurkRequestPrivate::MTurkRequestPrivate(const MTurkRequestPrivate &other,
                                     MTurkRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MTurkRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MTurk service's Action
 * query parameters.
 */
QString MTurkRequestPrivate::toString(const MTurkRequest::Action &action)
{
    #define ActionToString(action) \
        case MTurkRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MTurk
} // namespace QtAws

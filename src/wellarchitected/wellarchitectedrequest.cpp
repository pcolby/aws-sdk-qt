/*
    Copyright 2013-2021 Paul Colby

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

#include "wellarchitectedrequest.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::WellArchitectedRequest
 * \brief The WellArchitectedRequest class provides an interface for WellArchitected requests.
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * \enum WellArchitectedRequest::Action
 *
 * This enum describes the actions that can be performed as WellArchitected
 * requests.
 *
 * \value AssociateLensesAction WellArchitected AssociateLenses action.
 * \value CreateMilestoneAction WellArchitected CreateMilestone action.
 * \value CreateWorkloadAction WellArchitected CreateWorkload action.
 * \value CreateWorkloadShareAction WellArchitected CreateWorkloadShare action.
 * \value DeleteWorkloadAction WellArchitected DeleteWorkload action.
 * \value DeleteWorkloadShareAction WellArchitected DeleteWorkloadShare action.
 * \value DisassociateLensesAction WellArchitected DisassociateLenses action.
 * \value GetAnswerAction WellArchitected GetAnswer action.
 * \value GetLensReviewAction WellArchitected GetLensReview action.
 * \value GetLensReviewReportAction WellArchitected GetLensReviewReport action.
 * \value GetLensVersionDifferenceAction WellArchitected GetLensVersionDifference action.
 * \value GetMilestoneAction WellArchitected GetMilestone action.
 * \value GetWorkloadAction WellArchitected GetWorkload action.
 * \value ListAnswersAction WellArchitected ListAnswers action.
 * \value ListLensReviewImprovementsAction WellArchitected ListLensReviewImprovements action.
 * \value ListLensReviewsAction WellArchitected ListLensReviews action.
 * \value ListLensesAction WellArchitected ListLenses action.
 * \value ListMilestonesAction WellArchitected ListMilestones action.
 * \value ListNotificationsAction WellArchitected ListNotifications action.
 * \value ListShareInvitationsAction WellArchitected ListShareInvitations action.
 * \value ListTagsForResourceAction WellArchitected ListTagsForResource action.
 * \value ListWorkloadSharesAction WellArchitected ListWorkloadShares action.
 * \value ListWorkloadsAction WellArchitected ListWorkloads action.
 * \value TagResourceAction WellArchitected TagResource action.
 * \value UntagResourceAction WellArchitected UntagResource action.
 * \value UpdateAnswerAction WellArchitected UpdateAnswer action.
 * \value UpdateLensReviewAction WellArchitected UpdateLensReview action.
 * \value UpdateShareInvitationAction WellArchitected UpdateShareInvitation action.
 * \value UpdateWorkloadAction WellArchitected UpdateWorkload action.
 * \value UpdateWorkloadShareAction WellArchitected UpdateWorkloadShare action.
 * \value UpgradeLensReviewAction WellArchitected UpgradeLensReview action.
 */

/*!
 * Constructs a WellArchitectedRequest object for WellArchitected \a action.
 */
WellArchitectedRequest::WellArchitectedRequest(const Action action)
    : d_ptr(new WellArchitectedRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
WellArchitectedRequest::WellArchitectedRequest(const WellArchitectedRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new WellArchitectedRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the WellArchitectedRequest object to be equal to \a other.
 */
WellArchitectedRequest& WellArchitectedRequest::operator=(const WellArchitectedRequest &other)
{
    Q_D(WellArchitectedRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa WellArchitectedRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WellArchitectedRequestPrivate.
 */
WellArchitectedRequest::WellArchitectedRequest(WellArchitectedRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the WellArchitected action to be performed by this request.
 */
WellArchitectedRequest::Action WellArchitectedRequest::action() const
{
    Q_D(const WellArchitectedRequest);
    return d->action;
}

/*!
 * Returns the name of the WellArchitected action to be performed by this request.
 */
QString WellArchitectedRequest::actionString() const
{
    return WellArchitectedRequestPrivate::toString(action());
}

/*!
 * Returns the WellArchitected API version implemented by this request.
 */
QString WellArchitectedRequest::apiVersion() const
{
    Q_D(const WellArchitectedRequest);
    return d->apiVersion;
}

/*!
 * Sets the WellArchitected action to be performed by this request to \a action.
 */
void WellArchitectedRequest::setAction(const Action action)
{
    Q_D(WellArchitectedRequest);
    d->action = action;
}

/*!
 * Sets the WellArchitected API version to include in this request to \a version.
 */
void WellArchitectedRequest::setApiVersion(const QString &version)
{
    Q_D(WellArchitectedRequest);
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
bool WellArchitectedRequest::operator==(const WellArchitectedRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid WellArchitected queue name.
 *
 * @par From WellArchitected FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WellArchitected queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool WellArchitectedRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int WellArchitectedRequest::clearParameter(const QString &name)
{
    Q_D(WellArchitectedRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void WellArchitectedRequest::clearParameters()
{
    Q_D(WellArchitectedRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant WellArchitectedRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WellArchitectedRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &WellArchitectedRequest::parameters() const
{
    Q_D(const WellArchitectedRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void WellArchitectedRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WellArchitectedRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void WellArchitectedRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WellArchitectedRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the WellArchitected request using the given
 * \a endpoint.
 *
 * This WellArchitected implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest WellArchitectedRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const WellArchitectedRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::WellArchitected::WellArchitectedRequestPrivate
 * \brief The WellArchitectedRequestPrivate class provides private implementation for WellArchitectedRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a WellArchitectedRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
WellArchitectedRequestPrivate::WellArchitectedRequestPrivate(const WellArchitectedRequest::Action action, WellArchitectedRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WellArchitectedRequest class's copy constructor.
 */
WellArchitectedRequestPrivate::WellArchitectedRequestPrivate(const WellArchitectedRequestPrivate &other,
                                     WellArchitectedRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts WellArchitectedRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the WellArchitected service's Action
 * query parameters.
 */
QString WellArchitectedRequestPrivate::toString(const WellArchitectedRequest::Action &action)
{
    #define ActionToString(action) \
        case WellArchitectedRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateLenses);
        ActionToString(CreateMilestone);
        ActionToString(CreateWorkload);
        ActionToString(CreateWorkloadShare);
        ActionToString(DeleteWorkload);
        ActionToString(DeleteWorkloadShare);
        ActionToString(DisassociateLenses);
        ActionToString(GetAnswer);
        ActionToString(GetLensReview);
        ActionToString(GetLensReviewReport);
        ActionToString(GetLensVersionDifference);
        ActionToString(GetMilestone);
        ActionToString(GetWorkload);
        ActionToString(ListAnswers);
        ActionToString(ListLensReviewImprovements);
        ActionToString(ListLensReviews);
        ActionToString(ListLenses);
        ActionToString(ListMilestones);
        ActionToString(ListNotifications);
        ActionToString(ListShareInvitations);
        ActionToString(ListTagsForResource);
        ActionToString(ListWorkloadShares);
        ActionToString(ListWorkloads);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAnswer);
        ActionToString(UpdateLensReview);
        ActionToString(UpdateShareInvitation);
        ActionToString(UpdateWorkload);
        ActionToString(UpdateWorkloadShare);
        ActionToString(UpgradeLensReview);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WellArchitected
} // namespace QtAws

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

#include "detectiverequest.h"
#include "detectiverequest_p.h"

namespace QtAws {
namespace Detective {

/*!
 * \class QtAws::Detective::DetectiveRequest
 * \brief The DetectiveRequest class provides an interface for Detective requests.
 *
 * \inmodule QtAwsDetective
 */

/*!
 * \enum DetectiveRequest::Action
 *
 * This enum describes the actions that can be performed as Detective
 * requests.
 *
 * \value AcceptInvitationAction Detective AcceptInvitation action.
 * \value CreateGraphAction Detective CreateGraph action.
 * \value CreateMembersAction Detective CreateMembers action.
 * \value DeleteGraphAction Detective DeleteGraph action.
 * \value DeleteMembersAction Detective DeleteMembers action.
 * \value DisassociateMembershipAction Detective DisassociateMembership action.
 * \value GetMembersAction Detective GetMembers action.
 * \value ListGraphsAction Detective ListGraphs action.
 * \value ListInvitationsAction Detective ListInvitations action.
 * \value ListMembersAction Detective ListMembers action.
 * \value ListTagsForResourceAction Detective ListTagsForResource action.
 * \value RejectInvitationAction Detective RejectInvitation action.
 * \value StartMonitoringMemberAction Detective StartMonitoringMember action.
 * \value TagResourceAction Detective TagResource action.
 * \value UntagResourceAction Detective UntagResource action.
 */

/*!
 * Constructs a DetectiveRequest object for Detective \a action.
 */
DetectiveRequest::DetectiveRequest(const Action action)
    : d_ptr(new DetectiveRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DetectiveRequest::DetectiveRequest(const DetectiveRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new DetectiveRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DetectiveRequest object to be equal to \a other.
 */
DetectiveRequest& DetectiveRequest::operator=(const DetectiveRequest &other)
{
    Q_D(DetectiveRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DetectiveRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DetectiveRequestPrivate.
 */
DetectiveRequest::DetectiveRequest(DetectiveRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the Detective action to be performed by this request.
 */
DetectiveRequest::Action DetectiveRequest::action() const
{
    Q_D(const DetectiveRequest);
    return d->action;
}

/*!
 * Returns the name of the Detective action to be performed by this request.
 */
QString DetectiveRequest::actionString() const
{
    return DetectiveRequestPrivate::toString(action());
}

/*!
 * Returns the Detective API version implemented by this request.
 */
QString DetectiveRequest::apiVersion() const
{
    Q_D(const DetectiveRequest);
    return d->apiVersion;
}

/*!
 * Sets the Detective action to be performed by this request to \a action.
 */
void DetectiveRequest::setAction(const Action action)
{
    Q_D(DetectiveRequest);
    d->action = action;
}

/*!
 * Sets the Detective API version to include in this request to \a version.
 */
void DetectiveRequest::setApiVersion(const QString &version)
{
    Q_D(DetectiveRequest);
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
bool DetectiveRequest::operator==(const DetectiveRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Detective queue name.
 *
 * @par From Detective FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Detective queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DetectiveRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DetectiveRequest::clearParameter(const QString &name)
{
    Q_D(DetectiveRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DetectiveRequest::clearParameters()
{
    Q_D(DetectiveRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DetectiveRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DetectiveRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DetectiveRequest::parameters() const
{
    Q_D(const DetectiveRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DetectiveRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DetectiveRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DetectiveRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DetectiveRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Detective request using the given
 * \a endpoint.
 *
 * This Detective implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DetectiveRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DetectiveRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Detective::DetectiveRequestPrivate
 * \brief The DetectiveRequestPrivate class provides private implementation for DetectiveRequest.
 * \internal
 *
 * \inmodule QtAwsDetective
 */

/*!
 * Constructs a DetectiveRequestPrivate object for Detective \a action,
 * with public implementation \a q.
 */
DetectiveRequestPrivate::DetectiveRequestPrivate(const DetectiveRequest::Action action, DetectiveRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DetectiveRequest class's copy constructor.
 */
DetectiveRequestPrivate::DetectiveRequestPrivate(const DetectiveRequestPrivate &other,
                                     DetectiveRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DetectiveRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Detective service's Action
 * query parameters.
 */
QString DetectiveRequestPrivate::toString(const DetectiveRequest::Action &action)
{
    #define ActionToString(action) \
        case DetectiveRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptInvitation);
        ActionToString(CreateGraph);
        ActionToString(CreateMembers);
        ActionToString(DeleteGraph);
        ActionToString(DeleteMembers);
        ActionToString(DisassociateMembership);
        ActionToString(GetMembers);
        ActionToString(ListGraphs);
        ActionToString(ListInvitations);
        ActionToString(ListMembers);
        ActionToString(ListTagsForResource);
        ActionToString(RejectInvitation);
        ActionToString(StartMonitoringMember);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Detective
} // namespace QtAws

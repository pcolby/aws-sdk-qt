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

#include "managedblockchainrequest.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ManagedBlockchainRequest
 * \brief The ManagedBlockchainRequest class provides an interface for ManagedBlockchain requests.
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * \enum ManagedBlockchainRequest::Action
 *
 * This enum describes the actions that can be performed as ManagedBlockchain
 * requests.
 *
 * \value CreateMemberAction ManagedBlockchain CreateMember action.
 * \value CreateNetworkAction ManagedBlockchain CreateNetwork action.
 * \value CreateNodeAction ManagedBlockchain CreateNode action.
 * \value CreateProposalAction ManagedBlockchain CreateProposal action.
 * \value DeleteMemberAction ManagedBlockchain DeleteMember action.
 * \value DeleteNodeAction ManagedBlockchain DeleteNode action.
 * \value GetMemberAction ManagedBlockchain GetMember action.
 * \value GetNetworkAction ManagedBlockchain GetNetwork action.
 * \value GetNodeAction ManagedBlockchain GetNode action.
 * \value GetProposalAction ManagedBlockchain GetProposal action.
 * \value ListInvitationsAction ManagedBlockchain ListInvitations action.
 * \value ListMembersAction ManagedBlockchain ListMembers action.
 * \value ListNetworksAction ManagedBlockchain ListNetworks action.
 * \value ListNodesAction ManagedBlockchain ListNodes action.
 * \value ListProposalVotesAction ManagedBlockchain ListProposalVotes action.
 * \value ListProposalsAction ManagedBlockchain ListProposals action.
 * \value ListTagsForResourceAction ManagedBlockchain ListTagsForResource action.
 * \value RejectInvitationAction ManagedBlockchain RejectInvitation action.
 * \value TagResourceAction ManagedBlockchain TagResource action.
 * \value UntagResourceAction ManagedBlockchain UntagResource action.
 * \value UpdateMemberAction ManagedBlockchain UpdateMember action.
 * \value UpdateNodeAction ManagedBlockchain UpdateNode action.
 * \value VoteOnProposalAction ManagedBlockchain VoteOnProposal action.
 */

/*!
 * Constructs a ManagedBlockchainRequest object for ManagedBlockchain \a action.
 */
ManagedBlockchainRequest::ManagedBlockchainRequest(const Action action)
    : d_ptr(new ManagedBlockchainRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ManagedBlockchainRequest::ManagedBlockchainRequest(const ManagedBlockchainRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new ManagedBlockchainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ManagedBlockchainRequest object to be equal to \a other.
 */
ManagedBlockchainRequest& ManagedBlockchainRequest::operator=(const ManagedBlockchainRequest &other)
{
    Q_D(ManagedBlockchainRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ManagedBlockchainRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ManagedBlockchainRequestPrivate.
 */
ManagedBlockchainRequest::ManagedBlockchainRequest(ManagedBlockchainRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the ManagedBlockchain action to be performed by this request.
 */
ManagedBlockchainRequest::Action ManagedBlockchainRequest::action() const
{
    Q_D(const ManagedBlockchainRequest);
    return d->action;
}

/*!
 * Returns the name of the ManagedBlockchain action to be performed by this request.
 */
QString ManagedBlockchainRequest::actionString() const
{
    return ManagedBlockchainRequestPrivate::toString(action());
}

/*!
 * Returns the ManagedBlockchain API version implemented by this request.
 */
QString ManagedBlockchainRequest::apiVersion() const
{
    Q_D(const ManagedBlockchainRequest);
    return d->apiVersion;
}

/*!
 * Sets the ManagedBlockchain action to be performed by this request to \a action.
 */
void ManagedBlockchainRequest::setAction(const Action action)
{
    Q_D(ManagedBlockchainRequest);
    d->action = action;
}

/*!
 * Sets the ManagedBlockchain API version to include in this request to \a version.
 */
void ManagedBlockchainRequest::setApiVersion(const QString &version)
{
    Q_D(ManagedBlockchainRequest);
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
bool ManagedBlockchainRequest::operator==(const ManagedBlockchainRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ManagedBlockchain queue name.
 *
 * @par From ManagedBlockchain FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ManagedBlockchain queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ManagedBlockchainRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ManagedBlockchainRequest::clearParameter(const QString &name)
{
    Q_D(ManagedBlockchainRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ManagedBlockchainRequest::clearParameters()
{
    Q_D(ManagedBlockchainRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ManagedBlockchainRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ManagedBlockchainRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ManagedBlockchainRequest::parameters() const
{
    Q_D(const ManagedBlockchainRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ManagedBlockchainRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ManagedBlockchainRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ManagedBlockchainRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ManagedBlockchainRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ManagedBlockchain request using the given
 * \a endpoint.
 *
 * This ManagedBlockchain implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ManagedBlockchainRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ManagedBlockchainRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ManagedBlockchain::ManagedBlockchainRequestPrivate
 * \brief The ManagedBlockchainRequestPrivate class provides private implementation for ManagedBlockchainRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ManagedBlockchainRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
ManagedBlockchainRequestPrivate::ManagedBlockchainRequestPrivate(const ManagedBlockchainRequest::Action action, ManagedBlockchainRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ManagedBlockchainRequest class's copy constructor.
 */
ManagedBlockchainRequestPrivate::ManagedBlockchainRequestPrivate(const ManagedBlockchainRequestPrivate &other,
                                     ManagedBlockchainRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ManagedBlockchainRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ManagedBlockchain service's Action
 * query parameters.
 */
QString ManagedBlockchainRequestPrivate::toString(const ManagedBlockchainRequest::Action &action)
{
    #define ActionToString(action) \
        case ManagedBlockchainRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ManagedBlockchain
} // namespace QtAws

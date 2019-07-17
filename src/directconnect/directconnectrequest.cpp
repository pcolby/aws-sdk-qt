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

#include "directconnectrequest.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DirectConnectRequest
 * \brief The DirectConnectRequest class provides an interface for DirectConnect requests.
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * \enum DirectConnectRequest::Action
 *
 * This enum describes the actions that can be performed as DirectConnect
 * requests.
 *
 * \value AcceptDirectConnectGatewayAssociationProposalAction DirectConnect AcceptDirectConnectGatewayAssociationProposal action.
 * \value AllocateConnectionOnInterconnectAction DirectConnect AllocateConnectionOnInterconnect action.
 * \value AllocateHostedConnectionAction DirectConnect AllocateHostedConnection action.
 * \value AllocatePrivateVirtualInterfaceAction DirectConnect AllocatePrivateVirtualInterface action.
 * \value AllocatePublicVirtualInterfaceAction DirectConnect AllocatePublicVirtualInterface action.
 * \value AllocateTransitVirtualInterfaceAction DirectConnect AllocateTransitVirtualInterface action.
 * \value AssociateConnectionWithLagAction DirectConnect AssociateConnectionWithLag action.
 * \value AssociateHostedConnectionAction DirectConnect AssociateHostedConnection action.
 * \value AssociateVirtualInterfaceAction DirectConnect AssociateVirtualInterface action.
 * \value ConfirmConnectionAction DirectConnect ConfirmConnection action.
 * \value ConfirmPrivateVirtualInterfaceAction DirectConnect ConfirmPrivateVirtualInterface action.
 * \value ConfirmPublicVirtualInterfaceAction DirectConnect ConfirmPublicVirtualInterface action.
 * \value ConfirmTransitVirtualInterfaceAction DirectConnect ConfirmTransitVirtualInterface action.
 * \value CreateBGPPeerAction DirectConnect CreateBGPPeer action.
 * \value CreateConnectionAction DirectConnect CreateConnection action.
 * \value CreateDirectConnectGatewayAction DirectConnect CreateDirectConnectGateway action.
 * \value CreateDirectConnectGatewayAssociationAction DirectConnect CreateDirectConnectGatewayAssociation action.
 * \value CreateDirectConnectGatewayAssociationProposalAction DirectConnect CreateDirectConnectGatewayAssociationProposal action.
 * \value CreateInterconnectAction DirectConnect CreateInterconnect action.
 * \value CreateLagAction DirectConnect CreateLag action.
 * \value CreatePrivateVirtualInterfaceAction DirectConnect CreatePrivateVirtualInterface action.
 * \value CreatePublicVirtualInterfaceAction DirectConnect CreatePublicVirtualInterface action.
 * \value CreateTransitVirtualInterfaceAction DirectConnect CreateTransitVirtualInterface action.
 * \value DeleteBGPPeerAction DirectConnect DeleteBGPPeer action.
 * \value DeleteConnectionAction DirectConnect DeleteConnection action.
 * \value DeleteDirectConnectGatewayAction DirectConnect DeleteDirectConnectGateway action.
 * \value DeleteDirectConnectGatewayAssociationAction DirectConnect DeleteDirectConnectGatewayAssociation action.
 * \value DeleteDirectConnectGatewayAssociationProposalAction DirectConnect DeleteDirectConnectGatewayAssociationProposal action.
 * \value DeleteInterconnectAction DirectConnect DeleteInterconnect action.
 * \value DeleteLagAction DirectConnect DeleteLag action.
 * \value DeleteVirtualInterfaceAction DirectConnect DeleteVirtualInterface action.
 * \value DescribeConnectionLoaAction DirectConnect DescribeConnectionLoa action.
 * \value DescribeConnectionsAction DirectConnect DescribeConnections action.
 * \value DescribeConnectionsOnInterconnectAction DirectConnect DescribeConnectionsOnInterconnect action.
 * \value DescribeDirectConnectGatewayAssociationProposalsAction DirectConnect DescribeDirectConnectGatewayAssociationProposals action.
 * \value DescribeDirectConnectGatewayAssociationsAction DirectConnect DescribeDirectConnectGatewayAssociations action.
 * \value DescribeDirectConnectGatewayAttachmentsAction DirectConnect DescribeDirectConnectGatewayAttachments action.
 * \value DescribeDirectConnectGatewaysAction DirectConnect DescribeDirectConnectGateways action.
 * \value DescribeHostedConnectionsAction DirectConnect DescribeHostedConnections action.
 * \value DescribeInterconnectLoaAction DirectConnect DescribeInterconnectLoa action.
 * \value DescribeInterconnectsAction DirectConnect DescribeInterconnects action.
 * \value DescribeLagsAction DirectConnect DescribeLags action.
 * \value DescribeLoaAction DirectConnect DescribeLoa action.
 * \value DescribeLocationsAction DirectConnect DescribeLocations action.
 * \value DescribeTagsAction DirectConnect DescribeTags action.
 * \value DescribeVirtualGatewaysAction DirectConnect DescribeVirtualGateways action.
 * \value DescribeVirtualInterfacesAction DirectConnect DescribeVirtualInterfaces action.
 * \value DisassociateConnectionFromLagAction DirectConnect DisassociateConnectionFromLag action.
 * \value TagResourceAction DirectConnect TagResource action.
 * \value UntagResourceAction DirectConnect UntagResource action.
 * \value UpdateDirectConnectGatewayAssociationAction DirectConnect UpdateDirectConnectGatewayAssociation action.
 * \value UpdateLagAction DirectConnect UpdateLag action.
 * \value UpdateVirtualInterfaceAttributesAction DirectConnect UpdateVirtualInterfaceAttributes action.
 */

/*!
 * Constructs a DirectConnectRequest object for DirectConnect \a action.
 */
DirectConnectRequest::DirectConnectRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DirectConnectRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DirectConnectRequest::DirectConnectRequest(const DirectConnectRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DirectConnectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DirectConnectRequest object to be equal to \a other.
 */
DirectConnectRequest& DirectConnectRequest::operator=(const DirectConnectRequest &other)
{
    Q_D(DirectConnectRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DirectConnectRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DirectConnectRequestPrivate.
 */
DirectConnectRequest::DirectConnectRequest(DirectConnectRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the DirectConnect action to be performed by this request.
 */
DirectConnectRequest::Action DirectConnectRequest::action() const
{
    Q_D(const DirectConnectRequest);
    return d->action;
}

/*!
 * Returns the name of the DirectConnect action to be performed by this request.
 */
QString DirectConnectRequest::actionString() const
{
    return DirectConnectRequestPrivate::toString(action());
}

/*!
 * Returns the DirectConnect API version implemented by this request.
 */
QString DirectConnectRequest::apiVersion() const
{
    Q_D(const DirectConnectRequest);
    return d->apiVersion;
}

/*!
 * Sets the DirectConnect action to be performed by this request to \a action.
 */
void DirectConnectRequest::setAction(const Action action)
{
    Q_D(DirectConnectRequest);
    d->action = action;
}

/*!
 * Sets the DirectConnect API version to include in this request to \a version.
 */
void DirectConnectRequest::setApiVersion(const QString &version)
{
    Q_D(DirectConnectRequest);
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
bool DirectConnectRequest::operator==(const DirectConnectRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DirectConnect queue name.
 *
 * @par From DirectConnect FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DirectConnect queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DirectConnectRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DirectConnectRequest::clearParameter(const QString &name)
{
    Q_D(DirectConnectRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DirectConnectRequest::clearParameters()
{
    Q_D(DirectConnectRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DirectConnectRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DirectConnectRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DirectConnectRequest::parameters() const
{
    Q_D(const DirectConnectRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DirectConnectRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DirectConnectRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DirectConnectRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DirectConnectRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DirectConnect request using the given
 * \a endpoint.
 *
 * This DirectConnect implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DirectConnectRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DirectConnectRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DirectConnect::DirectConnectRequestPrivate
 * \brief The DirectConnectRequestPrivate class provides private implementation for DirectConnectRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DirectConnectRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DirectConnectRequestPrivate::DirectConnectRequestPrivate(const DirectConnectRequest::Action action, DirectConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DirectConnectRequest class's copy constructor.
 */
DirectConnectRequestPrivate::DirectConnectRequestPrivate(const DirectConnectRequestPrivate &other,
                                     DirectConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DirectConnectRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DirectConnect service's Action
 * query parameters.
 */
QString DirectConnectRequestPrivate::toString(const DirectConnectRequest::Action &action)
{
    #define ActionToString(action) \
        case DirectConnectRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DirectConnect
} // namespace QtAws

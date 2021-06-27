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

#include "iotwirelessrequest.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::IoTWirelessRequest
 * \brief The IoTWirelessRequest class provides an interface for IoTWireless requests.
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * \enum IoTWirelessRequest::Action
 *
 * This enum describes the actions that can be performed as IoTWireless
 * requests.
 *
 * \value AssociateAwsAccountWithPartnerAccountAction IoTWireless AssociateAwsAccountWithPartnerAccount action.
 * \value AssociateWirelessDeviceWithThingAction IoTWireless AssociateWirelessDeviceWithThing action.
 * \value AssociateWirelessGatewayWithCertificateAction IoTWireless AssociateWirelessGatewayWithCertificate action.
 * \value AssociateWirelessGatewayWithThingAction IoTWireless AssociateWirelessGatewayWithThing action.
 * \value CreateDestinationAction IoTWireless CreateDestination action.
 * \value CreateDeviceProfileAction IoTWireless CreateDeviceProfile action.
 * \value CreateServiceProfileAction IoTWireless CreateServiceProfile action.
 * \value CreateWirelessDeviceAction IoTWireless CreateWirelessDevice action.
 * \value CreateWirelessGatewayAction IoTWireless CreateWirelessGateway action.
 * \value CreateWirelessGatewayTaskAction IoTWireless CreateWirelessGatewayTask action.
 * \value CreateWirelessGatewayTaskDefinitionAction IoTWireless CreateWirelessGatewayTaskDefinition action.
 * \value DeleteDestinationAction IoTWireless DeleteDestination action.
 * \value DeleteDeviceProfileAction IoTWireless DeleteDeviceProfile action.
 * \value DeleteServiceProfileAction IoTWireless DeleteServiceProfile action.
 * \value DeleteWirelessDeviceAction IoTWireless DeleteWirelessDevice action.
 * \value DeleteWirelessGatewayAction IoTWireless DeleteWirelessGateway action.
 * \value DeleteWirelessGatewayTaskAction IoTWireless DeleteWirelessGatewayTask action.
 * \value DeleteWirelessGatewayTaskDefinitionAction IoTWireless DeleteWirelessGatewayTaskDefinition action.
 * \value DisassociateAwsAccountFromPartnerAccountAction IoTWireless DisassociateAwsAccountFromPartnerAccount action.
 * \value DisassociateWirelessDeviceFromThingAction IoTWireless DisassociateWirelessDeviceFromThing action.
 * \value DisassociateWirelessGatewayFromCertificateAction IoTWireless DisassociateWirelessGatewayFromCertificate action.
 * \value DisassociateWirelessGatewayFromThingAction IoTWireless DisassociateWirelessGatewayFromThing action.
 * \value GetDestinationAction IoTWireless GetDestination action.
 * \value GetDeviceProfileAction IoTWireless GetDeviceProfile action.
 * \value GetLogLevelsByResourceTypesAction IoTWireless GetLogLevelsByResourceTypes action.
 * \value GetPartnerAccountAction IoTWireless GetPartnerAccount action.
 * \value GetResourceLogLevelAction IoTWireless GetResourceLogLevel action.
 * \value GetServiceEndpointAction IoTWireless GetServiceEndpoint action.
 * \value GetServiceProfileAction IoTWireless GetServiceProfile action.
 * \value GetWirelessDeviceAction IoTWireless GetWirelessDevice action.
 * \value GetWirelessDeviceStatisticsAction IoTWireless GetWirelessDeviceStatistics action.
 * \value GetWirelessGatewayAction IoTWireless GetWirelessGateway action.
 * \value GetWirelessGatewayCertificateAction IoTWireless GetWirelessGatewayCertificate action.
 * \value GetWirelessGatewayFirmwareInformationAction IoTWireless GetWirelessGatewayFirmwareInformation action.
 * \value GetWirelessGatewayStatisticsAction IoTWireless GetWirelessGatewayStatistics action.
 * \value GetWirelessGatewayTaskAction IoTWireless GetWirelessGatewayTask action.
 * \value GetWirelessGatewayTaskDefinitionAction IoTWireless GetWirelessGatewayTaskDefinition action.
 * \value ListDestinationsAction IoTWireless ListDestinations action.
 * \value ListDeviceProfilesAction IoTWireless ListDeviceProfiles action.
 * \value ListPartnerAccountsAction IoTWireless ListPartnerAccounts action.
 * \value ListServiceProfilesAction IoTWireless ListServiceProfiles action.
 * \value ListTagsForResourceAction IoTWireless ListTagsForResource action.
 * \value ListWirelessDevicesAction IoTWireless ListWirelessDevices action.
 * \value ListWirelessGatewayTaskDefinitionsAction IoTWireless ListWirelessGatewayTaskDefinitions action.
 * \value ListWirelessGatewaysAction IoTWireless ListWirelessGateways action.
 * \value PutResourceLogLevelAction IoTWireless PutResourceLogLevel action.
 * \value ResetAllResourceLogLevelsAction IoTWireless ResetAllResourceLogLevels action.
 * \value ResetResourceLogLevelAction IoTWireless ResetResourceLogLevel action.
 * \value SendDataToWirelessDeviceAction IoTWireless SendDataToWirelessDevice action.
 * \value TagResourceAction IoTWireless TagResource action.
 * \value TestWirelessDeviceAction IoTWireless TestWirelessDevice action.
 * \value UntagResourceAction IoTWireless UntagResource action.
 * \value UpdateDestinationAction IoTWireless UpdateDestination action.
 * \value UpdateLogLevelsByResourceTypesAction IoTWireless UpdateLogLevelsByResourceTypes action.
 * \value UpdatePartnerAccountAction IoTWireless UpdatePartnerAccount action.
 * \value UpdateWirelessDeviceAction IoTWireless UpdateWirelessDevice action.
 * \value UpdateWirelessGatewayAction IoTWireless UpdateWirelessGateway action.
 */

/*!
 * Constructs a IoTWirelessRequest object for IoTWireless \a action.
 */
IoTWirelessRequest::IoTWirelessRequest(const Action action)
    : d_ptr(new IoTWirelessRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTWirelessRequest::IoTWirelessRequest(const IoTWirelessRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new IoTWirelessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTWirelessRequest object to be equal to \a other.
 */
IoTWirelessRequest& IoTWirelessRequest::operator=(const IoTWirelessRequest &other)
{
    Q_D(IoTWirelessRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTWirelessRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTWirelessRequestPrivate.
 */
IoTWirelessRequest::IoTWirelessRequest(IoTWirelessRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the IoTWireless action to be performed by this request.
 */
IoTWirelessRequest::Action IoTWirelessRequest::action() const
{
    Q_D(const IoTWirelessRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTWireless action to be performed by this request.
 */
QString IoTWirelessRequest::actionString() const
{
    return IoTWirelessRequestPrivate::toString(action());
}

/*!
 * Returns the IoTWireless API version implemented by this request.
 */
QString IoTWirelessRequest::apiVersion() const
{
    Q_D(const IoTWirelessRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTWireless action to be performed by this request to \a action.
 */
void IoTWirelessRequest::setAction(const Action action)
{
    Q_D(IoTWirelessRequest);
    d->action = action;
}

/*!
 * Sets the IoTWireless API version to include in this request to \a version.
 */
void IoTWirelessRequest::setApiVersion(const QString &version)
{
    Q_D(IoTWirelessRequest);
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
bool IoTWirelessRequest::operator==(const IoTWirelessRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTWireless queue name.
 *
 * @par From IoTWireless FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTWireless queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTWirelessRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTWirelessRequest::clearParameter(const QString &name)
{
    Q_D(IoTWirelessRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTWirelessRequest::clearParameters()
{
    Q_D(IoTWirelessRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTWirelessRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTWirelessRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTWirelessRequest::parameters() const
{
    Q_D(const IoTWirelessRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTWirelessRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTWirelessRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTWirelessRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTWirelessRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTWireless request using the given
 * \a endpoint.
 *
 * This IoTWireless implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTWirelessRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTWirelessRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTWireless::IoTWirelessRequestPrivate
 * \brief The IoTWirelessRequestPrivate class provides private implementation for IoTWirelessRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a IoTWirelessRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
IoTWirelessRequestPrivate::IoTWirelessRequestPrivate(const IoTWirelessRequest::Action action, IoTWirelessRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTWirelessRequest class's copy constructor.
 */
IoTWirelessRequestPrivate::IoTWirelessRequestPrivate(const IoTWirelessRequestPrivate &other,
                                     IoTWirelessRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTWirelessRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTWireless service's Action
 * query parameters.
 */
QString IoTWirelessRequestPrivate::toString(const IoTWirelessRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTWirelessRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTWireless
} // namespace QtAws

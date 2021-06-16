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

#include "chimerequest.h"
#include "chimerequest_p.h"

namespace QtAws {
namespace Chime {

/*!
 * \class QtAws::Chime::ChimeRequest
 * \brief The ChimeRequest class provides an interface for Chime requests.
 *
 * \inmodule QtAwsChime
 */

/*!
 * \enum ChimeRequest::Action
 *
 * This enum describes the actions that can be performed as Chime
 * requests.
 *
 * \value AssociatePhoneNumberWithUserAction Chime AssociatePhoneNumberWithUser action.
 * \value AssociatePhoneNumbersWithVoiceConnectorAction Chime AssociatePhoneNumbersWithVoiceConnector action.
 * \value BatchDeletePhoneNumberAction Chime BatchDeletePhoneNumber action.
 * \value BatchSuspendUserAction Chime BatchSuspendUser action.
 * \value BatchUnsuspendUserAction Chime BatchUnsuspendUser action.
 * \value BatchUpdatePhoneNumberAction Chime BatchUpdatePhoneNumber action.
 * \value BatchUpdateUserAction Chime BatchUpdateUser action.
 * \value CreateAccountAction Chime CreateAccount action.
 * \value CreateBotAction Chime CreateBot action.
 * \value CreatePhoneNumberOrderAction Chime CreatePhoneNumberOrder action.
 * \value CreateVoiceConnectorAction Chime CreateVoiceConnector action.
 * \value DeleteAccountAction Chime DeleteAccount action.
 * \value DeleteEventsConfigurationAction Chime DeleteEventsConfiguration action.
 * \value DeletePhoneNumberAction Chime DeletePhoneNumber action.
 * \value DeleteVoiceConnectorAction Chime DeleteVoiceConnector action.
 * \value DeleteVoiceConnectorOriginationAction Chime DeleteVoiceConnectorOrigination action.
 * \value DeleteVoiceConnectorTerminationAction Chime DeleteVoiceConnectorTermination action.
 * \value DeleteVoiceConnectorTerminationCredentialsAction Chime DeleteVoiceConnectorTerminationCredentials action.
 * \value DisassociatePhoneNumberFromUserAction Chime DisassociatePhoneNumberFromUser action.
 * \value DisassociatePhoneNumbersFromVoiceConnectorAction Chime DisassociatePhoneNumbersFromVoiceConnector action.
 * \value GetAccountAction Chime GetAccount action.
 * \value GetAccountSettingsAction Chime GetAccountSettings action.
 * \value GetBotAction Chime GetBot action.
 * \value GetEventsConfigurationAction Chime GetEventsConfiguration action.
 * \value GetGlobalSettingsAction Chime GetGlobalSettings action.
 * \value GetPhoneNumberAction Chime GetPhoneNumber action.
 * \value GetPhoneNumberOrderAction Chime GetPhoneNumberOrder action.
 * \value GetUserAction Chime GetUser action.
 * \value GetUserSettingsAction Chime GetUserSettings action.
 * \value GetVoiceConnectorAction Chime GetVoiceConnector action.
 * \value GetVoiceConnectorOriginationAction Chime GetVoiceConnectorOrigination action.
 * \value GetVoiceConnectorTerminationAction Chime GetVoiceConnectorTermination action.
 * \value GetVoiceConnectorTerminationHealthAction Chime GetVoiceConnectorTerminationHealth action.
 * \value InviteUsersAction Chime InviteUsers action.
 * \value ListAccountsAction Chime ListAccounts action.
 * \value ListBotsAction Chime ListBots action.
 * \value ListPhoneNumberOrdersAction Chime ListPhoneNumberOrders action.
 * \value ListPhoneNumbersAction Chime ListPhoneNumbers action.
 * \value ListUsersAction Chime ListUsers action.
 * \value ListVoiceConnectorTerminationCredentialsAction Chime ListVoiceConnectorTerminationCredentials action.
 * \value ListVoiceConnectorsAction Chime ListVoiceConnectors action.
 * \value LogoutUserAction Chime LogoutUser action.
 * \value PutEventsConfigurationAction Chime PutEventsConfiguration action.
 * \value PutVoiceConnectorOriginationAction Chime PutVoiceConnectorOrigination action.
 * \value PutVoiceConnectorTerminationAction Chime PutVoiceConnectorTermination action.
 * \value PutVoiceConnectorTerminationCredentialsAction Chime PutVoiceConnectorTerminationCredentials action.
 * \value RegenerateSecurityTokenAction Chime RegenerateSecurityToken action.
 * \value ResetPersonalPINAction Chime ResetPersonalPIN action.
 * \value RestorePhoneNumberAction Chime RestorePhoneNumber action.
 * \value SearchAvailablePhoneNumbersAction Chime SearchAvailablePhoneNumbers action.
 * \value UpdateAccountAction Chime UpdateAccount action.
 * \value UpdateAccountSettingsAction Chime UpdateAccountSettings action.
 * \value UpdateBotAction Chime UpdateBot action.
 * \value UpdateGlobalSettingsAction Chime UpdateGlobalSettings action.
 * \value UpdatePhoneNumberAction Chime UpdatePhoneNumber action.
 * \value UpdateUserAction Chime UpdateUser action.
 * \value UpdateUserSettingsAction Chime UpdateUserSettings action.
 * \value UpdateVoiceConnectorAction Chime UpdateVoiceConnector action.
 */

/*!
 * Constructs a ChimeRequest object for Chime \a action.
 */
ChimeRequest::ChimeRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ChimeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ChimeRequest::ChimeRequest(const ChimeRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ChimeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ChimeRequest object to be equal to \a other.
 */
ChimeRequest& ChimeRequest::operator=(const ChimeRequest &other)
{
    Q_D(ChimeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ChimeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ChimeRequestPrivate.
 */
ChimeRequest::ChimeRequest(ChimeRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Chime action to be performed by this request.
 */
ChimeRequest::Action ChimeRequest::action() const
{
    Q_D(const ChimeRequest);
    return d->action;
}

/*!
 * Returns the name of the Chime action to be performed by this request.
 */
QString ChimeRequest::actionString() const
{
    return ChimeRequestPrivate::toString(action());
}

/*!
 * Returns the Chime API version implemented by this request.
 */
QString ChimeRequest::apiVersion() const
{
    Q_D(const ChimeRequest);
    return d->apiVersion;
}

/*!
 * Sets the Chime action to be performed by this request to \a action.
 */
void ChimeRequest::setAction(const Action action)
{
    Q_D(ChimeRequest);
    d->action = action;
}

/*!
 * Sets the Chime API version to include in this request to \a version.
 */
void ChimeRequest::setApiVersion(const QString &version)
{
    Q_D(ChimeRequest);
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
bool ChimeRequest::operator==(const ChimeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Chime queue name.
 *
 * @par From Chime FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Chime queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ChimeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ChimeRequest::clearParameter(const QString &name)
{
    Q_D(ChimeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ChimeRequest::clearParameters()
{
    Q_D(ChimeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ChimeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ChimeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ChimeRequest::parameters() const
{
    Q_D(const ChimeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ChimeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ChimeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ChimeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ChimeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Chime request using the given
 * \a endpoint.
 *
 * This Chime implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ChimeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ChimeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Chime::ChimeRequestPrivate
 * \brief The ChimeRequestPrivate class provides private implementation for ChimeRequest.
 * \internal
 *
 * \inmodule QtAwsChime
 */

/*!
 * Constructs a ChimeRequestPrivate object for Chime \a action,
 * with public implementation \a q.
 */
ChimeRequestPrivate::ChimeRequestPrivate(const ChimeRequest::Action action, ChimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ChimeRequest class's copy constructor.
 */
ChimeRequestPrivate::ChimeRequestPrivate(const ChimeRequestPrivate &other,
                                     ChimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ChimeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Chime service's Action
 * query parameters.
 */
QString ChimeRequestPrivate::toString(const ChimeRequest::Action &action)
{
    #define ActionToString(action) \
        case ChimeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Chime
} // namespace QtAws

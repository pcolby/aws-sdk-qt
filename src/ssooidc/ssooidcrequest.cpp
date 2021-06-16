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

#include "ssooidcrequest.h"
#include "ssooidcrequest_p.h"

namespace QtAws {
namespace SSOOIDC {

/*!
 * \class QtAws::SSOOIDC::SsooidcRequest
 * \brief The SsooidcRequest class provides an interface for SSOOIDC requests.
 *
 * \inmodule QtAwsSSOOIDC
 */

/*!
 * \enum SsooidcRequest::Action
 *
 * This enum describes the actions that can be performed as SSOOIDC
 * requests.
 *
 * \value CreateTokenAction SSOOIDC CreateToken action.
 * \value RegisterClientAction SSOOIDC RegisterClient action.
 * \value StartDeviceAuthorizationAction SSOOIDC StartDeviceAuthorization action.
 */

/*!
 * Constructs a SsooidcRequest object for SSOOIDC \a action.
 */
SsooidcRequest::SsooidcRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SsooidcRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SsooidcRequest::SsooidcRequest(const SsooidcRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SsooidcRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SsooidcRequest object to be equal to \a other.
 */
SsooidcRequest& SsooidcRequest::operator=(const SsooidcRequest &other)
{
    Q_D(SsooidcRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SsooidcRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsooidcRequestPrivate.
 */
SsooidcRequest::SsooidcRequest(SsooidcRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SSOOIDC action to be performed by this request.
 */
SsooidcRequest::Action SsooidcRequest::action() const
{
    Q_D(const SsooidcRequest);
    return d->action;
}

/*!
 * Returns the name of the SSOOIDC action to be performed by this request.
 */
QString SsooidcRequest::actionString() const
{
    return SsooidcRequestPrivate::toString(action());
}

/*!
 * Returns the SSOOIDC API version implemented by this request.
 */
QString SsooidcRequest::apiVersion() const
{
    Q_D(const SsooidcRequest);
    return d->apiVersion;
}

/*!
 * Sets the SSOOIDC action to be performed by this request to \a action.
 */
void SsooidcRequest::setAction(const Action action)
{
    Q_D(SsooidcRequest);
    d->action = action;
}

/*!
 * Sets the SSOOIDC API version to include in this request to \a version.
 */
void SsooidcRequest::setApiVersion(const QString &version)
{
    Q_D(SsooidcRequest);
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
bool SsooidcRequest::operator==(const SsooidcRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SSOOIDC queue name.
 *
 * @par From SSOOIDC FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SSOOIDC queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SsooidcRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SsooidcRequest::clearParameter(const QString &name)
{
    Q_D(SsooidcRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SsooidcRequest::clearParameters()
{
    Q_D(SsooidcRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SsooidcRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SsooidcRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SsooidcRequest::parameters() const
{
    Q_D(const SsooidcRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SsooidcRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SsooidcRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SsooidcRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SsooidcRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SSOOIDC request using the given
 * \a endpoint.
 *
 * This SSOOIDC implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SsooidcRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SsooidcRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SSOOIDC::SsooidcRequestPrivate
 * \brief The SsooidcRequestPrivate class provides private implementation for SsooidcRequest.
 * \internal
 *
 * \inmodule QtAwsSSOOIDC
 */

/*!
 * Constructs a SsooidcRequestPrivate object for SSOOIDC \a action,
 * with public implementation \a q.
 */
SsooidcRequestPrivate::SsooidcRequestPrivate(const SsooidcRequest::Action action, SsooidcRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SsooidcRequest class's copy constructor.
 */
SsooidcRequestPrivate::SsooidcRequestPrivate(const SsooidcRequestPrivate &other,
                                     SsooidcRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SsooidcRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SSOOIDC service's Action
 * query parameters.
 */
QString SsooidcRequestPrivate::toString(const SsooidcRequest::Action &action)
{
    #define ActionToString(action) \
        case SsooidcRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SSOOIDC
} // namespace QtAws

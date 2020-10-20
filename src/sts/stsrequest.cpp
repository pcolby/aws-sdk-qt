/*
    Copyright 2013-2020 Paul Colby

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

#include "stsrequest.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace STS {

/*!
 * \class QtAws::STS::StsRequest
 * \brief The StsRequest class provides an interface for STS requests.
 *
 * \inmodule QtAwsSTS
 */

/*!
 * \enum StsRequest::Action
 *
 * This enum describes the actions that can be performed as STS
 * requests.
 *
 * \value AssumeRoleAction STS AssumeRole action.
 * \value AssumeRoleWithSAMLAction STS AssumeRoleWithSAML action.
 * \value AssumeRoleWithWebIdentityAction STS AssumeRoleWithWebIdentity action.
 * \value DecodeAuthorizationMessageAction STS DecodeAuthorizationMessage action.
 * \value GetCallerIdentityAction STS GetCallerIdentity action.
 * \value GetFederationTokenAction STS GetFederationToken action.
 * \value GetSessionTokenAction STS GetSessionToken action.
 */

/*!
 * Constructs a StsRequest object for STS \a action.
 */
StsRequest::StsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new StsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
StsRequest::StsRequest(const StsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new StsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the StsRequest object to be equal to \a other.
 */
StsRequest& StsRequest::operator=(const StsRequest &other)
{
    Q_D(StsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa StsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from StsRequestPrivate.
 */
StsRequest::StsRequest(StsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the STS action to be performed by this request.
 */
StsRequest::Action StsRequest::action() const
{
    Q_D(const StsRequest);
    return d->action;
}

/*!
 * Returns the name of the STS action to be performed by this request.
 */
QString StsRequest::actionString() const
{
    return StsRequestPrivate::toString(action());
}

/*!
 * Returns the STS API version implemented by this request.
 */
QString StsRequest::apiVersion() const
{
    Q_D(const StsRequest);
    return d->apiVersion;
}

/*!
 * Sets the STS action to be performed by this request to \a action.
 */
void StsRequest::setAction(const Action action)
{
    Q_D(StsRequest);
    d->action = action;
}

/*!
 * Sets the STS API version to include in this request to \a version.
 */
void StsRequest::setApiVersion(const QString &version)
{
    Q_D(StsRequest);
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
bool StsRequest::operator==(const StsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid STS queue name.
 *
 * @par From STS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid STS queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool StsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int StsRequest::clearParameter(const QString &name)
{
    Q_D(StsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void StsRequest::clearParameters()
{
    Q_D(StsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant StsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const StsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &StsRequest::parameters() const
{
    Q_D(const StsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void StsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(StsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void StsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(StsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the STS request using the given
 * \a endpoint.
 *
 * This STS implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest StsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const StsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::STS::StsRequestPrivate
 * \brief The StsRequestPrivate class provides private implementation for StsRequest.
 * \internal
 *
 * \inmodule QtAwsSTS
 */

/*!
 * Constructs a StsRequestPrivate object for STS \a action,
 * with public implementation \a q.
 */
StsRequestPrivate::StsRequestPrivate(const StsRequest::Action action, StsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the StsRequest class's copy constructor.
 */
StsRequestPrivate::StsRequestPrivate(const StsRequestPrivate &other,
                                     StsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts StsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the STS service's Action
 * query parameters.
 */
QString StsRequestPrivate::toString(const StsRequest::Action &action)
{
    #define ActionToString(action) \
        case StsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace STS
} // namespace QtAws

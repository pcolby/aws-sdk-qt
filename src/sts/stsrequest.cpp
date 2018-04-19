/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "stsrequest.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace STS {

/*!
 * \class QtAws::STS::STSRequest
 * \brief The STSRequest class provides an interface for STS requests.
 *
 * \inmodule QtAwsSTS
 */

/*!
 * \enum STSRequest::Action
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
 * Constructs a[n] STSRequest object for STS \a action.
 */
STSRequest::STSRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new STSRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
STSRequest::STSRequest(const STSRequest &other)
    : QtAws::Core::AwsAbstractRequest(new STSRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the STSRequest object to be equal to \a other.
 */
STSRequest& STSRequest::operator=(const STSRequest &other)
{
    Q_D(STSRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa STSRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from STSRequestPrivate.
 */
STSRequest::STSRequest(STSRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the STS action to be performed by this request.
 */
STSRequest::Action STSRequest::action() const
{
    Q_D(const STSRequest);
    return d->action;
}

/*!
 * Returns the name of the STS action to be performed by this request.
 */
QString STSRequest::actionString() const
{
    return STSRequestPrivate::toString(action());
}

/*!
 * Returns the STS API version implemented by this request.
 */
QString STSRequest::apiVersion() const
{
    Q_D(const STSRequest);
    return d->apiVersion;
}

/*!
 * Sets the STS action to be performed by this request to \a action.
 */
void STSRequest::setAction(const Action action)
{
    Q_D(STSRequest);
    d->action = action;
}

/*!
 * Sets the STS API version to include in this request to \a version.
 */
void STSRequest::setApiVersion(const QString &version)
{
    Q_D(STSRequest);
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
bool STSRequest::operator==(const STSRequest &other) const
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
/*bool STSRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int STSRequest::clearParameter(const QString &name)
{
    Q_D(STSRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void STSRequest::clearParameters()
{
    Q_D(STSRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant STSRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const STSRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &STSRequest::parameters() const
{
    Q_D(const STSRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void STSRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(STSRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void STSRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(STSRequest);
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
QNetworkRequest STSRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const STSRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::STS::STSRequestPrivate
 * \brief The STSRequestPrivate class provides private implementation for STSRequest.
 * \internal
 *
 * \inmodule QtAwsSTS
 */

/*!
 * Constructs a STSRequestPrivate object for STS \a action with,
 * public implementation \a q.
 */
STSRequestPrivate::STSRequestPrivate(const STSRequest::Action action, STSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the STSRequest class's copy constructor.
 */
STSRequestPrivate::STSRequestPrivate(const STSRequestPrivate &other,
                                     STSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts STSRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the STS service's Action
 * query parameters.
 */
QString STSRequestPrivate::toString(const STSRequest::Action &action)
{
    #define ActionToString(action) \
        case STSRequest::action##Action: return QStringLiteral(#action)
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

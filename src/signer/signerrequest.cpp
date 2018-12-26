/*
    Copyright 2013-2018 Paul Colby

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

#include "signerrequest.h"
#include "signerrequest_p.h"

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::signerRequest
 * \brief The signerRequest class provides an interface for signer requests.
 *
 * \inmodule QtAwssigner
 */

/*!
 * \enum signerRequest::Action
 *
 * This enum describes the actions that can be performed as signer
 * requests.
 *
 * \value CancelSigningProfileAction signer CancelSigningProfile action.
 * \value DescribeSigningJobAction signer DescribeSigningJob action.
 * \value GetSigningPlatformAction signer GetSigningPlatform action.
 * \value GetSigningProfileAction signer GetSigningProfile action.
 * \value ListSigningJobsAction signer ListSigningJobs action.
 * \value ListSigningPlatformsAction signer ListSigningPlatforms action.
 * \value ListSigningProfilesAction signer ListSigningProfiles action.
 * \value PutSigningProfileAction signer PutSigningProfile action.
 * \value StartSigningJobAction signer StartSigningJob action.
 */

/*!
 * Constructs a signerRequest object for signer \a action.
 */
signerRequest::signerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new signerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
signerRequest::signerRequest(const signerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new signerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the signerRequest object to be equal to \a other.
 */
signerRequest& signerRequest::operator=(const signerRequest &other)
{
    Q_D(signerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa signerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from signerRequestPrivate.
 */
signerRequest::signerRequest(signerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the signer action to be performed by this request.
 */
signerRequest::Action signerRequest::action() const
{
    Q_D(const signerRequest);
    return d->action;
}

/*!
 * Returns the name of the signer action to be performed by this request.
 */
QString signerRequest::actionString() const
{
    return signerRequestPrivate::toString(action());
}

/*!
 * Returns the signer API version implemented by this request.
 */
QString signerRequest::apiVersion() const
{
    Q_D(const signerRequest);
    return d->apiVersion;
}

/*!
 * Sets the signer action to be performed by this request to \a action.
 */
void signerRequest::setAction(const Action action)
{
    Q_D(signerRequest);
    d->action = action;
}

/*!
 * Sets the signer API version to include in this request to \a version.
 */
void signerRequest::setApiVersion(const QString &version)
{
    Q_D(signerRequest);
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
bool signerRequest::operator==(const signerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid signer queue name.
 *
 * @par From signer FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid signer queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool signerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int signerRequest::clearParameter(const QString &name)
{
    Q_D(signerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void signerRequest::clearParameters()
{
    Q_D(signerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant signerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const signerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &signerRequest::parameters() const
{
    Q_D(const signerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void signerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(signerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void signerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(signerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the signer request using the given
 * \a endpoint.
 *
 * This signer implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest signerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const signerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::signer::signerRequestPrivate
 * \brief The signerRequestPrivate class provides private implementation for signerRequest.
 * \internal
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a signerRequestPrivate object for signer \a action,
 * with public implementation \a q.
 */
signerRequestPrivate::signerRequestPrivate(const signerRequest::Action action, signerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the signerRequest class's copy constructor.
 */
signerRequestPrivate::signerRequestPrivate(const signerRequestPrivate &other,
                                     signerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts signerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the signer service's Action
 * query parameters.
 */
QString signerRequestPrivate::toString(const signerRequest::Action &action)
{
    #define ActionToString(action) \
        case signerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace signer
} // namespace QtAws

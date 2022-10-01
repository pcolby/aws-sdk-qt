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

#include "cloudsearchdomainrequest.h"
#include "cloudsearchdomainrequest_p.h"

namespace QtAws {
namespace CloudSearchDomain {

/*!
 * \class QtAws::CloudSearchDomain::CloudSearchDomainRequest
 * \brief The CloudSearchDomainRequest class provides an interface for CloudSearchDomain requests.
 *
 * \inmodule QtAwsCloudSearchDomain
 */

/*!
 * \enum CloudSearchDomainRequest::Action
 *
 * This enum describes the actions that can be performed as CloudSearchDomain
 * requests.
 *
 * \value SearchAction CloudSearchDomain Search action.
 * \value SuggestAction CloudSearchDomain Suggest action.
 * \value UploadDocumentsAction CloudSearchDomain UploadDocuments action.
 */

/*!
 * Constructs a CloudSearchDomainRequest object for CloudSearchDomain \a action.
 */
CloudSearchDomainRequest::CloudSearchDomainRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudSearchDomainRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudSearchDomainRequest::CloudSearchDomainRequest(const CloudSearchDomainRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CloudSearchDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudSearchDomainRequest object to be equal to \a other.
 */
CloudSearchDomainRequest& CloudSearchDomainRequest::operator=(const CloudSearchDomainRequest &other)
{
    Q_D(CloudSearchDomainRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudSearchDomainRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudSearchDomainRequestPrivate.
 */
CloudSearchDomainRequest::CloudSearchDomainRequest(CloudSearchDomainRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CloudSearchDomain action to be performed by this request.
 */
CloudSearchDomainRequest::Action CloudSearchDomainRequest::action() const
{
    Q_D(const CloudSearchDomainRequest);
    return d->action;
}

/*!
 * Returns the name of the CloudSearchDomain action to be performed by this request.
 */
QString CloudSearchDomainRequest::actionString() const
{
    return CloudSearchDomainRequestPrivate::toString(action());
}

/*!
 * Returns the CloudSearchDomain API version implemented by this request.
 */
QString CloudSearchDomainRequest::apiVersion() const
{
    Q_D(const CloudSearchDomainRequest);
    return d->apiVersion;
}

/*!
 * Sets the CloudSearchDomain action to be performed by this request to \a action.
 */
void CloudSearchDomainRequest::setAction(const Action action)
{
    Q_D(CloudSearchDomainRequest);
    d->action = action;
}

/*!
 * Sets the CloudSearchDomain API version to include in this request to \a version.
 */
void CloudSearchDomainRequest::setApiVersion(const QString &version)
{
    Q_D(CloudSearchDomainRequest);
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
bool CloudSearchDomainRequest::operator==(const CloudSearchDomainRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudSearchDomain queue name.
 *
 * @par From CloudSearchDomain FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudSearchDomain queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudSearchDomainRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudSearchDomainRequest::clearParameter(const QString &name)
{
    Q_D(CloudSearchDomainRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudSearchDomainRequest::clearParameters()
{
    Q_D(CloudSearchDomainRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudSearchDomainRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudSearchDomainRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudSearchDomainRequest::parameters() const
{
    Q_D(const CloudSearchDomainRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudSearchDomainRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudSearchDomainRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudSearchDomainRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudSearchDomainRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudSearchDomain request using the given
 * \a endpoint.
 *
 * This CloudSearchDomain implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudSearchDomainRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CloudSearchDomainRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudSearchDomain::CloudSearchDomainRequestPrivate
 * \brief The CloudSearchDomainRequestPrivate class provides private implementation for CloudSearchDomainRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearchDomain
 */

/*!
 * Constructs a CloudSearchDomainRequestPrivate object for CloudSearchDomain \a action,
 * with public implementation \a q.
 */
CloudSearchDomainRequestPrivate::CloudSearchDomainRequestPrivate(const CloudSearchDomainRequest::Action action, CloudSearchDomainRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2013-01-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudSearchDomainRequest class's copy constructor.
 */
CloudSearchDomainRequestPrivate::CloudSearchDomainRequestPrivate(const CloudSearchDomainRequestPrivate &other,
                                     CloudSearchDomainRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudSearchDomainRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudSearchDomain service's Action
 * query parameters.
 */
QString CloudSearchDomainRequestPrivate::toString(const CloudSearchDomainRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudSearchDomainRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(Search);
        ActionToString(Suggest);
        ActionToString(UploadDocuments);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudSearchDomain
} // namespace QtAws

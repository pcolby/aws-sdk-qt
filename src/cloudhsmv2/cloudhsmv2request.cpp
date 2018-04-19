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

#include "cloudhsmv2request.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::CloudHSMV2Request
 * \brief The CloudHSMV2Request class provides an interface for CloudHSMV2 requests.
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * \enum CloudHSMV2Request::Action
 *
 * This enum describes the actions that can be performed as CloudHSMV2
 * requests.
 *
 * \value CreateClusterAction CloudHSMV2 CreateCluster action.
 * \value CreateHsmAction CloudHSMV2 CreateHsm action.
 * \value DeleteClusterAction CloudHSMV2 DeleteCluster action.
 * \value DeleteHsmAction CloudHSMV2 DeleteHsm action.
 * \value DescribeBackupsAction CloudHSMV2 DescribeBackups action.
 * \value DescribeClustersAction CloudHSMV2 DescribeClusters action.
 * \value InitializeClusterAction CloudHSMV2 InitializeCluster action.
 * \value ListTagsAction CloudHSMV2 ListTags action.
 * \value TagResourceAction CloudHSMV2 TagResource action.
 * \value UntagResourceAction CloudHSMV2 UntagResource action.
 */

/*!
 * Constructs a CloudHSMV2Request object for CloudHSMV2 \a action.
 */
CloudHSMV2Request::CloudHSMV2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudHSMV2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudHSMV2Request::CloudHSMV2Request(const CloudHSMV2Request &other)
    : QtAws::Core::AwsAbstractRequest(new CloudHSMV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudHSMV2Request object to be equal to \a other.
 */
CloudHSMV2Request& CloudHSMV2Request::operator=(const CloudHSMV2Request &other)
{
    Q_D(CloudHSMV2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudHSMV2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudHSMV2RequestPrivate.
 */
CloudHSMV2Request::CloudHSMV2Request(CloudHSMV2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CloudHSMV2 action to be performed by this request.
 */
CloudHSMV2Request::Action CloudHSMV2Request::action() const
{
    Q_D(const CloudHSMV2Request);
    return d->action;
}

/*!
 * Returns the name of the CloudHSMV2 action to be performed by this request.
 */
QString CloudHSMV2Request::actionString() const
{
    return CloudHSMV2RequestPrivate::toString(action());
}

/*!
 * Returns the CloudHSMV2 API version implemented by this request.
 */
QString CloudHSMV2Request::apiVersion() const
{
    Q_D(const CloudHSMV2Request);
    return d->apiVersion;
}

/*!
 * Sets the CloudHSMV2 action to be performed by this request to \a action.
 */
void CloudHSMV2Request::setAction(const Action action)
{
    Q_D(CloudHSMV2Request);
    d->action = action;
}

/*!
 * Sets the CloudHSMV2 API version to include in this request to \a version.
 */
void CloudHSMV2Request::setApiVersion(const QString &version)
{
    Q_D(CloudHSMV2Request);
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
bool CloudHSMV2Request::operator==(const CloudHSMV2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudHSMV2 queue name.
 *
 * @par From CloudHSMV2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudHSMV2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudHSMV2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudHSMV2Request::clearParameter(const QString &name)
{
    Q_D(CloudHSMV2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudHSMV2Request::clearParameters()
{
    Q_D(CloudHSMV2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudHSMV2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudHSMV2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudHSMV2Request::parameters() const
{
    Q_D(const CloudHSMV2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudHSMV2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudHSMV2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudHSMV2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudHSMV2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudHSMV2 request using the given
 * \a endpoint.
 *
 * This CloudHSMV2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudHSMV2Request::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CloudHSMV2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudHSMV2::CloudHSMV2RequestPrivate
 * \brief The CloudHSMV2RequestPrivate class provides private implementation for CloudHSMV2Request.
 * \internal
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a CloudHSMV2RequestPrivate object for CloudHSMV2 \a action,
 * with public implementation \a q.
 */
CloudHSMV2RequestPrivate::CloudHSMV2RequestPrivate(const CloudHSMV2Request::Action action, CloudHSMV2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudHSMV2Request class's copy constructor.
 */
CloudHSMV2RequestPrivate::CloudHSMV2RequestPrivate(const CloudHSMV2RequestPrivate &other,
                                     CloudHSMV2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudHSMV2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudHSMV2 service's Action
 * query parameters.
 */
QString CloudHSMV2RequestPrivate::toString(const CloudHSMV2Request::Action &action)
{
    #define ActionToString(action) \
        case CloudHSMV2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudHSMV2
} // namespace QtAws

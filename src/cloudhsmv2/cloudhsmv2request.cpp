// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudhsmv2request.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::CloudHsmV2Request
 * \brief The CloudHsmV2Request class provides an interface for CloudHsmV2 requests.
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * \enum CloudHsmV2Request::Action
 *
 * This enum describes the actions that can be performed as CloudHsmV2
 * requests.
 *
 * \value CopyBackupToRegionAction CloudHsmV2 CopyBackupToRegion action.
 * \value CreateClusterAction CloudHsmV2 CreateCluster action.
 * \value CreateHsmAction CloudHsmV2 CreateHsm action.
 * \value DeleteBackupAction CloudHsmV2 DeleteBackup action.
 * \value DeleteClusterAction CloudHsmV2 DeleteCluster action.
 * \value DeleteHsmAction CloudHsmV2 DeleteHsm action.
 * \value DescribeBackupsAction CloudHsmV2 DescribeBackups action.
 * \value DescribeClustersAction CloudHsmV2 DescribeClusters action.
 * \value InitializeClusterAction CloudHsmV2 InitializeCluster action.
 * \value ListTagsAction CloudHsmV2 ListTags action.
 * \value ModifyBackupAttributesAction CloudHsmV2 ModifyBackupAttributes action.
 * \value ModifyClusterAction CloudHsmV2 ModifyCluster action.
 * \value RestoreBackupAction CloudHsmV2 RestoreBackup action.
 * \value TagResourceAction CloudHsmV2 TagResource action.
 * \value UntagResourceAction CloudHsmV2 UntagResource action.
 */

/*!
 * Constructs a CloudHsmV2Request object for CloudHsmV2 \a action.
 */
CloudHsmV2Request::CloudHsmV2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudHsmV2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudHsmV2Request::CloudHsmV2Request(const CloudHsmV2Request &other)
    : QtAws::Core::AwsAbstractRequest(new CloudHsmV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudHsmV2Request object to be equal to \a other.
 */
CloudHsmV2Request& CloudHsmV2Request::operator=(const CloudHsmV2Request &other)
{
    Q_D(CloudHsmV2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudHsmV2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudHsmV2RequestPrivate.
 */
CloudHsmV2Request::CloudHsmV2Request(CloudHsmV2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CloudHsmV2 action to be performed by this request.
 */
CloudHsmV2Request::Action CloudHsmV2Request::action() const
{
    Q_D(const CloudHsmV2Request);
    return d->action;
}

/*!
 * Returns the name of the CloudHsmV2 action to be performed by this request.
 */
QString CloudHsmV2Request::actionString() const
{
    return CloudHsmV2RequestPrivate::toString(action());
}

/*!
 * Returns the CloudHsmV2 API version implemented by this request.
 */
QString CloudHsmV2Request::apiVersion() const
{
    Q_D(const CloudHsmV2Request);
    return d->apiVersion;
}

/*!
 * Sets the CloudHsmV2 action to be performed by this request to \a action.
 */
void CloudHsmV2Request::setAction(const Action action)
{
    Q_D(CloudHsmV2Request);
    d->action = action;
}

/*!
 * Sets the CloudHsmV2 API version to include in this request to \a version.
 */
void CloudHsmV2Request::setApiVersion(const QString &version)
{
    Q_D(CloudHsmV2Request);
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
bool CloudHsmV2Request::operator==(const CloudHsmV2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudHsmV2 queue name.
 *
 * @par From CloudHsmV2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudHsmV2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudHsmV2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudHsmV2Request::clearParameter(const QString &name)
{
    Q_D(CloudHsmV2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudHsmV2Request::clearParameters()
{
    Q_D(CloudHsmV2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudHsmV2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudHsmV2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudHsmV2Request::parameters() const
{
    Q_D(const CloudHsmV2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudHsmV2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudHsmV2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudHsmV2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudHsmV2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudHsmV2 request using the given
 * \a endpoint.
 *
 * This CloudHsmV2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudHsmV2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CloudHsmV2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudHsmV2::CloudHsmV2RequestPrivate
 * \brief The CloudHsmV2RequestPrivate class provides private implementation for CloudHsmV2Request.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a CloudHsmV2RequestPrivate object for CloudHsmV2 \a action,
 * with public implementation \a q.
 */
CloudHsmV2RequestPrivate::CloudHsmV2RequestPrivate(const CloudHsmV2Request::Action action, CloudHsmV2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-04-28"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudHsmV2Request class's copy constructor.
 */
CloudHsmV2RequestPrivate::CloudHsmV2RequestPrivate(const CloudHsmV2RequestPrivate &other,
                                     CloudHsmV2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudHsmV2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudHsmV2 service's Action
 * query parameters.
 */
QString CloudHsmV2RequestPrivate::toString(const CloudHsmV2Request::Action &action)
{
    #define ActionToString(action) \
        case CloudHsmV2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CopyBackupToRegion);
        ActionToString(CreateCluster);
        ActionToString(CreateHsm);
        ActionToString(DeleteBackup);
        ActionToString(DeleteCluster);
        ActionToString(DeleteHsm);
        ActionToString(DescribeBackups);
        ActionToString(DescribeClusters);
        ActionToString(InitializeCluster);
        ActionToString(ListTags);
        ActionToString(ModifyBackupAttributes);
        ActionToString(ModifyCluster);
        ActionToString(RestoreBackup);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudHsmV2
} // namespace QtAws

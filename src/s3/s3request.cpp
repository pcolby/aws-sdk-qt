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

#include "s3request.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::S3Request
 * \brief The S3Request class provides an interface for S3 requests.
 *
 * \inmodule QtAwsS3
 */

/*!
 * \enum S3Request::Action
 *
 * This enum describes the actions that can be performed as S3
 * requests.
 *
 * \value AbortMultipartUploadAction S3 AbortMultipartUpload action.
 * \value CompleteMultipartUploadAction S3 CompleteMultipartUpload action.
 * \value CopyObjectAction S3 CopyObject action.
 * \value CreateBucketAction S3 CreateBucket action.
 * \value CreateMultipartUploadAction S3 CreateMultipartUpload action.
 * \value DeleteBucketAction S3 DeleteBucket action.
 * \value DeleteBucketAnalyticsConfigurationAction S3 DeleteBucketAnalyticsConfiguration action.
 * \value DeleteBucketCorsAction S3 DeleteBucketCors action.
 * \value DeleteBucketEncryptionAction S3 DeleteBucketEncryption action.
 * \value DeleteBucketInventoryConfigurationAction S3 DeleteBucketInventoryConfiguration action.
 * \value DeleteBucketLifecycleAction S3 DeleteBucketLifecycle action.
 * \value DeleteBucketMetricsConfigurationAction S3 DeleteBucketMetricsConfiguration action.
 * \value DeleteBucketPolicyAction S3 DeleteBucketPolicy action.
 * \value DeleteBucketReplicationAction S3 DeleteBucketReplication action.
 * \value DeleteBucketTaggingAction S3 DeleteBucketTagging action.
 * \value DeleteBucketWebsiteAction S3 DeleteBucketWebsite action.
 * \value DeleteObjectAction S3 DeleteObject action.
 * \value DeleteObjectTaggingAction S3 DeleteObjectTagging action.
 * \value DeleteObjectsAction S3 DeleteObjects action.
 * \value GetBucketAccelerateConfigurationAction S3 GetBucketAccelerateConfiguration action.
 * \value GetBucketAclAction S3 GetBucketAcl action.
 * \value GetBucketAnalyticsConfigurationAction S3 GetBucketAnalyticsConfiguration action.
 * \value GetBucketCorsAction S3 GetBucketCors action.
 * \value GetBucketEncryptionAction S3 GetBucketEncryption action.
 * \value GetBucketInventoryConfigurationAction S3 GetBucketInventoryConfiguration action.
 * \value GetBucketLifecycleAction S3 GetBucketLifecycle action.
 * \value GetBucketLifecycleConfigurationAction S3 GetBucketLifecycleConfiguration action.
 * \value GetBucketLocationAction S3 GetBucketLocation action.
 * \value GetBucketLoggingAction S3 GetBucketLogging action.
 * \value GetBucketMetricsConfigurationAction S3 GetBucketMetricsConfiguration action.
 * \value GetBucketNotificationAction S3 GetBucketNotification action.
 * \value GetBucketNotificationConfigurationAction S3 GetBucketNotificationConfiguration action.
 * \value GetBucketPolicyAction S3 GetBucketPolicy action.
 * \value GetBucketReplicationAction S3 GetBucketReplication action.
 * \value GetBucketRequestPaymentAction S3 GetBucketRequestPayment action.
 * \value GetBucketTaggingAction S3 GetBucketTagging action.
 * \value GetBucketVersioningAction S3 GetBucketVersioning action.
 * \value GetBucketWebsiteAction S3 GetBucketWebsite action.
 * \value GetObjectAction S3 GetObject action.
 * \value GetObjectAclAction S3 GetObjectAcl action.
 * \value GetObjectTaggingAction S3 GetObjectTagging action.
 * \value GetObjectTorrentAction S3 GetObjectTorrent action.
 * \value HeadBucketAction S3 HeadBucket action.
 * \value HeadObjectAction S3 HeadObject action.
 * \value ListBucketAnalyticsConfigurationsAction S3 ListBucketAnalyticsConfigurations action.
 * \value ListBucketInventoryConfigurationsAction S3 ListBucketInventoryConfigurations action.
 * \value ListBucketMetricsConfigurationsAction S3 ListBucketMetricsConfigurations action.
 * \value ListBucketsAction S3 ListBuckets action.
 * \value ListMultipartUploadsAction S3 ListMultipartUploads action.
 * \value ListObjectVersionsAction S3 ListObjectVersions action.
 * \value ListObjectsAction S3 ListObjects action.
 * \value ListObjectsV2Action S3 ListObjectsV2 action.
 * \value ListPartsAction S3 ListParts action.
 * \value PutBucketAccelerateConfigurationAction S3 PutBucketAccelerateConfiguration action.
 * \value PutBucketAclAction S3 PutBucketAcl action.
 * \value PutBucketAnalyticsConfigurationAction S3 PutBucketAnalyticsConfiguration action.
 * \value PutBucketCorsAction S3 PutBucketCors action.
 * \value PutBucketEncryptionAction S3 PutBucketEncryption action.
 * \value PutBucketInventoryConfigurationAction S3 PutBucketInventoryConfiguration action.
 * \value PutBucketLifecycleAction S3 PutBucketLifecycle action.
 * \value PutBucketLifecycleConfigurationAction S3 PutBucketLifecycleConfiguration action.
 * \value PutBucketLoggingAction S3 PutBucketLogging action.
 * \value PutBucketMetricsConfigurationAction S3 PutBucketMetricsConfiguration action.
 * \value PutBucketNotificationAction S3 PutBucketNotification action.
 * \value PutBucketNotificationConfigurationAction S3 PutBucketNotificationConfiguration action.
 * \value PutBucketPolicyAction S3 PutBucketPolicy action.
 * \value PutBucketReplicationAction S3 PutBucketReplication action.
 * \value PutBucketRequestPaymentAction S3 PutBucketRequestPayment action.
 * \value PutBucketTaggingAction S3 PutBucketTagging action.
 * \value PutBucketVersioningAction S3 PutBucketVersioning action.
 * \value PutBucketWebsiteAction S3 PutBucketWebsite action.
 * \value PutObjectAction S3 PutObject action.
 * \value PutObjectAclAction S3 PutObjectAcl action.
 * \value PutObjectTaggingAction S3 PutObjectTagging action.
 * \value RestoreObjectAction S3 RestoreObject action.
 * \value SelectObjectContentAction S3 SelectObjectContent action.
 * \value UploadPartAction S3 UploadPart action.
 * \value UploadPartCopyAction S3 UploadPartCopy action.
 */

/*!
 * Constructs a S3Request object for S3 \a action.
 */
S3Request::S3Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new S3RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
S3Request::S3Request(const S3Request &other)
    : QtAws::Core::AwsAbstractRequest(new S3RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the S3Request object to be equal to \a other.
 */
S3Request& S3Request::operator=(const S3Request &other)
{
    Q_D(S3Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa S3Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from S3RequestPrivate.
 */
S3Request::S3Request(S3RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the S3 action to be performed by this request.
 */
S3Request::Action S3Request::action() const
{
    Q_D(const S3Request);
    return d->action;
}

/*!
 * Returns the name of the S3 action to be performed by this request.
 */
QString S3Request::actionString() const
{
    return S3RequestPrivate::toString(action());
}

/*!
 * Returns the S3 API version implemented by this request.
 */
QString S3Request::apiVersion() const
{
    Q_D(const S3Request);
    return d->apiVersion;
}

/*!
 * Sets the S3 action to be performed by this request to \a action.
 */
void S3Request::setAction(const Action action)
{
    Q_D(S3Request);
    d->action = action;
}

/*!
 * Sets the S3 API version to include in this request to \a version.
 */
void S3Request::setApiVersion(const QString &version)
{
    Q_D(S3Request);
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
bool S3Request::operator==(const S3Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid S3 queue name.
 *
 * @par From S3 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid S3 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool S3Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int S3Request::clearParameter(const QString &name)
{
    Q_D(S3Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void S3Request::clearParameters()
{
    Q_D(S3Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant S3Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const S3Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &S3Request::parameters() const
{
    Q_D(const S3Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void S3Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(S3Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void S3Request::setParameters(const QVariantMap &parameters)
{
    Q_D(S3Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the S3 request using the given
 * \a endpoint.
 *
 * This S3 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest S3Request::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const S3Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::S3::S3RequestPrivate
 * \brief The S3RequestPrivate class provides private implementation for S3Request.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a S3RequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
S3RequestPrivate::S3RequestPrivate(const S3Request::Action action, S3Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the S3Request class's copy constructor.
 */
S3RequestPrivate::S3RequestPrivate(const S3RequestPrivate &other,
                                     S3Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts S3Request::Action enumerator values to their respective
 * string representations, appropriate for use with the S3 service's Action
 * query parameters.
 */
QString S3RequestPrivate::toString(const S3Request::Action &action)
{
    #define ActionToString(action) \
        case S3Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace S3
} // namespace QtAws

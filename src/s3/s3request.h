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

#ifndef QTAWS_S3REQUEST_H
#define QTAWS_S3REQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace S3 {

class S3RequestPrivate;

class QTAWS_EXPORT S3Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by S3.
    enum Action {
        AbortMultipartUploadAction,
        CompleteMultipartUploadAction,
        CopyObjectAction,
        CreateBucketAction,
        CreateMultipartUploadAction,
        DeleteBucketAction,
        DeleteBucketAnalyticsConfigurationAction,
        DeleteBucketCorsAction,
        DeleteBucketEncryptionAction,
        DeleteBucketInventoryConfigurationAction,
        DeleteBucketLifecycleAction,
        DeleteBucketMetricsConfigurationAction,
        DeleteBucketPolicyAction,
        DeleteBucketReplicationAction,
        DeleteBucketTaggingAction,
        DeleteBucketWebsiteAction,
        DeleteObjectAction,
        DeleteObjectTaggingAction,
        DeleteObjectsAction,
        GetBucketAccelerateConfigurationAction,
        GetBucketAclAction,
        GetBucketAnalyticsConfigurationAction,
        GetBucketCorsAction,
        GetBucketEncryptionAction,
        GetBucketInventoryConfigurationAction,
        GetBucketLifecycleAction,
        GetBucketLifecycleConfigurationAction,
        GetBucketLocationAction,
        GetBucketLoggingAction,
        GetBucketMetricsConfigurationAction,
        GetBucketNotificationAction,
        GetBucketNotificationConfigurationAction,
        GetBucketPolicyAction,
        GetBucketReplicationAction,
        GetBucketRequestPaymentAction,
        GetBucketTaggingAction,
        GetBucketVersioningAction,
        GetBucketWebsiteAction,
        GetObjectAction,
        GetObjectAclAction,
        GetObjectTaggingAction,
        GetObjectTorrentAction,
        HeadBucketAction,
        HeadObjectAction,
        ListBucketAnalyticsConfigurationsAction,
        ListBucketInventoryConfigurationsAction,
        ListBucketMetricsConfigurationsAction,
        ListBucketsAction,
        ListMultipartUploadsAction,
        ListObjectVersionsAction,
        ListObjectsAction,
        ListObjectsV2Action,
        ListPartsAction,
        PutBucketAccelerateConfigurationAction,
        PutBucketAclAction,
        PutBucketAnalyticsConfigurationAction,
        PutBucketCorsAction,
        PutBucketEncryptionAction,
        PutBucketInventoryConfigurationAction,
        PutBucketLifecycleAction,
        PutBucketLifecycleConfigurationAction,
        PutBucketLoggingAction,
        PutBucketMetricsConfigurationAction,
        PutBucketNotificationAction,
        PutBucketNotificationConfigurationAction,
        PutBucketPolicyAction,
        PutBucketReplicationAction,
        PutBucketRequestPaymentAction,
        PutBucketTaggingAction,
        PutBucketVersioningAction,
        PutBucketWebsiteAction,
        PutObjectAction,
        PutObjectAclAction,
        PutObjectTaggingAction,
        RestoreObjectAction,
        SelectObjectContentAction,
        UploadPartAction,
        UploadPartCopyAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    S3Request(const Action action);
    S3Request(const S3Request &other);
    S3Request &operator=(const S3Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const S3Request &other) const;


protected:
    /// @cond internal
    S3Request(S3RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(S3Request)

};

} // namespace S3
} // namespace QtAws

#endif

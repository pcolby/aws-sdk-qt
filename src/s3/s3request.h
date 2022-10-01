// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3REQUEST_H
#define QTAWS_S3REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawss3global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace S3 {

class S3RequestPrivate;

class QTAWSS3_EXPORT S3Request : public QtAws::Core::AwsAbstractRequest {

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
        DeleteBucketIntelligentTieringConfigurationAction,
        DeleteBucketInventoryConfigurationAction,
        DeleteBucketLifecycleAction,
        DeleteBucketMetricsConfigurationAction,
        DeleteBucketOwnershipControlsAction,
        DeleteBucketPolicyAction,
        DeleteBucketReplicationAction,
        DeleteBucketTaggingAction,
        DeleteBucketWebsiteAction,
        DeleteObjectAction,
        DeleteObjectTaggingAction,
        DeleteObjectsAction,
        DeletePublicAccessBlockAction,
        GetBucketAccelerateConfigurationAction,
        GetBucketAclAction,
        GetBucketAnalyticsConfigurationAction,
        GetBucketCorsAction,
        GetBucketEncryptionAction,
        GetBucketIntelligentTieringConfigurationAction,
        GetBucketInventoryConfigurationAction,
        GetBucketLifecycleConfigurationAction,
        GetBucketLocationAction,
        GetBucketLoggingAction,
        GetBucketMetricsConfigurationAction,
        GetBucketNotificationConfigurationAction,
        GetBucketOwnershipControlsAction,
        GetBucketPolicyAction,
        GetBucketPolicyStatusAction,
        GetBucketReplicationAction,
        GetBucketRequestPaymentAction,
        GetBucketTaggingAction,
        GetBucketVersioningAction,
        GetBucketWebsiteAction,
        GetObjectAction,
        GetObjectAclAction,
        GetObjectAttributesAction,
        GetObjectLegalHoldAction,
        GetObjectLockConfigurationAction,
        GetObjectRetentionAction,
        GetObjectTaggingAction,
        GetObjectTorrentAction,
        GetPublicAccessBlockAction,
        HeadBucketAction,
        HeadObjectAction,
        ListBucketAnalyticsConfigurationsAction,
        ListBucketIntelligentTieringConfigurationsAction,
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
        PutBucketIntelligentTieringConfigurationAction,
        PutBucketInventoryConfigurationAction,
        PutBucketLifecycleConfigurationAction,
        PutBucketLoggingAction,
        PutBucketMetricsConfigurationAction,
        PutBucketNotificationConfigurationAction,
        PutBucketOwnershipControlsAction,
        PutBucketPolicyAction,
        PutBucketReplicationAction,
        PutBucketRequestPaymentAction,
        PutBucketTaggingAction,
        PutBucketVersioningAction,
        PutBucketWebsiteAction,
        PutObjectAction,
        PutObjectAclAction,
        PutObjectLegalHoldAction,
        PutObjectLockConfigurationAction,
        PutObjectRetentionAction,
        PutObjectTaggingAction,
        PutPublicAccessBlockAction,
        RestoreObjectAction,
        SelectObjectContentAction,
        UploadPartAction,
        UploadPartCopyAction,
        WriteGetObjectResponseAction,
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
    explicit S3Request(S3RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(S3Request)

};

} // namespace S3
} // namespace QtAws

#endif

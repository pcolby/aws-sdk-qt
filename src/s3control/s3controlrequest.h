// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3CONTROLREQUEST_H
#define QTAWS_S3CONTROLREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawss3controlglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace S3Control {

class S3ControlRequestPrivate;

class QTAWSS3CONTROL_EXPORT S3ControlRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by S3Control.
    enum Action {
        CreateAccessPointAction,
        CreateAccessPointForObjectLambdaAction,
        CreateBucketAction,
        CreateJobAction,
        CreateMultiRegionAccessPointAction,
        DeleteAccessPointAction,
        DeleteAccessPointForObjectLambdaAction,
        DeleteAccessPointPolicyAction,
        DeleteAccessPointPolicyForObjectLambdaAction,
        DeleteBucketAction,
        DeleteBucketLifecycleConfigurationAction,
        DeleteBucketPolicyAction,
        DeleteBucketTaggingAction,
        DeleteJobTaggingAction,
        DeleteMultiRegionAccessPointAction,
        DeletePublicAccessBlockAction,
        DeleteStorageLensConfigurationAction,
        DeleteStorageLensConfigurationTaggingAction,
        DescribeJobAction,
        DescribeMultiRegionAccessPointOperationAction,
        GetAccessPointAction,
        GetAccessPointConfigurationForObjectLambdaAction,
        GetAccessPointForObjectLambdaAction,
        GetAccessPointPolicyAction,
        GetAccessPointPolicyForObjectLambdaAction,
        GetAccessPointPolicyStatusAction,
        GetAccessPointPolicyStatusForObjectLambdaAction,
        GetBucketAction,
        GetBucketLifecycleConfigurationAction,
        GetBucketPolicyAction,
        GetBucketTaggingAction,
        GetBucketVersioningAction,
        GetJobTaggingAction,
        GetMultiRegionAccessPointAction,
        GetMultiRegionAccessPointPolicyAction,
        GetMultiRegionAccessPointPolicyStatusAction,
        GetPublicAccessBlockAction,
        GetStorageLensConfigurationAction,
        GetStorageLensConfigurationTaggingAction,
        ListAccessPointsAction,
        ListAccessPointsForObjectLambdaAction,
        ListJobsAction,
        ListMultiRegionAccessPointsAction,
        ListRegionalBucketsAction,
        ListStorageLensConfigurationsAction,
        PutAccessPointConfigurationForObjectLambdaAction,
        PutAccessPointPolicyAction,
        PutAccessPointPolicyForObjectLambdaAction,
        PutBucketLifecycleConfigurationAction,
        PutBucketPolicyAction,
        PutBucketTaggingAction,
        PutBucketVersioningAction,
        PutJobTaggingAction,
        PutMultiRegionAccessPointPolicyAction,
        PutPublicAccessBlockAction,
        PutStorageLensConfigurationAction,
        PutStorageLensConfigurationTaggingAction,
        UpdateJobPriorityAction,
        UpdateJobStatusAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    S3ControlRequest(const Action action);
    S3ControlRequest(const S3ControlRequest &other);
    S3ControlRequest &operator=(const S3ControlRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const S3ControlRequest &other) const;


protected:
    /// @cond internal
    explicit S3ControlRequest(S3ControlRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(S3ControlRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

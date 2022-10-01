// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISANALYTICSV2REQUEST_H
#define QTAWS_KINESISANALYTICSV2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawskinesisanalyticsv2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace KinesisAnalyticsV2 {

class KinesisAnalyticsV2RequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT KinesisAnalyticsV2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by KinesisAnalyticsV2.
    enum Action {
        AddApplicationCloudWatchLoggingOptionAction,
        AddApplicationInputAction,
        AddApplicationInputProcessingConfigurationAction,
        AddApplicationOutputAction,
        AddApplicationReferenceDataSourceAction,
        AddApplicationVpcConfigurationAction,
        CreateApplicationAction,
        CreateApplicationPresignedUrlAction,
        CreateApplicationSnapshotAction,
        DeleteApplicationAction,
        DeleteApplicationCloudWatchLoggingOptionAction,
        DeleteApplicationInputProcessingConfigurationAction,
        DeleteApplicationOutputAction,
        DeleteApplicationReferenceDataSourceAction,
        DeleteApplicationSnapshotAction,
        DeleteApplicationVpcConfigurationAction,
        DescribeApplicationAction,
        DescribeApplicationSnapshotAction,
        DescribeApplicationVersionAction,
        DiscoverInputSchemaAction,
        ListApplicationSnapshotsAction,
        ListApplicationVersionsAction,
        ListApplicationsAction,
        ListTagsForResourceAction,
        RollbackApplicationAction,
        StartApplicationAction,
        StopApplicationAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApplicationAction,
        UpdateApplicationMaintenanceConfigurationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    KinesisAnalyticsV2Request(const Action action);
    KinesisAnalyticsV2Request(const KinesisAnalyticsV2Request &other);
    KinesisAnalyticsV2Request &operator=(const KinesisAnalyticsV2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const KinesisAnalyticsV2Request &other) const;


protected:
    /// @cond internal
    explicit KinesisAnalyticsV2Request(KinesisAnalyticsV2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisAnalyticsV2Request)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

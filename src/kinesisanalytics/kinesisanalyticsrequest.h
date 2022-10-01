// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISANALYTICSREQUEST_H
#define QTAWS_KINESISANALYTICSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawskinesisanalyticsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace KinesisAnalytics {

class KinesisAnalyticsRequestPrivate;

class QTAWSKINESISANALYTICS_EXPORT KinesisAnalyticsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by KinesisAnalytics.
    enum Action {
        AddApplicationCloudWatchLoggingOptionAction,
        AddApplicationInputAction,
        AddApplicationInputProcessingConfigurationAction,
        AddApplicationOutputAction,
        AddApplicationReferenceDataSourceAction,
        CreateApplicationAction,
        DeleteApplicationAction,
        DeleteApplicationCloudWatchLoggingOptionAction,
        DeleteApplicationInputProcessingConfigurationAction,
        DeleteApplicationOutputAction,
        DeleteApplicationReferenceDataSourceAction,
        DescribeApplicationAction,
        DiscoverInputSchemaAction,
        ListApplicationsAction,
        ListTagsForResourceAction,
        StartApplicationAction,
        StopApplicationAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApplicationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    KinesisAnalyticsRequest(const Action action);
    KinesisAnalyticsRequest(const KinesisAnalyticsRequest &other);
    KinesisAnalyticsRequest &operator=(const KinesisAnalyticsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const KinesisAnalyticsRequest &other) const;


protected:
    /// @cond internal
    explicit KinesisAnalyticsRequest(KinesisAnalyticsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisAnalyticsRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif

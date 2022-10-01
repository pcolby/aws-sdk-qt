// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTANALYTICSREQUEST_H
#define QTAWS_IOTANALYTICSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiotanalyticsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoTAnalytics {

class IoTAnalyticsRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT IoTAnalyticsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoTAnalytics.
    enum Action {
        BatchPutMessageAction,
        CancelPipelineReprocessingAction,
        CreateChannelAction,
        CreateDatasetAction,
        CreateDatasetContentAction,
        CreateDatastoreAction,
        CreatePipelineAction,
        DeleteChannelAction,
        DeleteDatasetAction,
        DeleteDatasetContentAction,
        DeleteDatastoreAction,
        DeletePipelineAction,
        DescribeChannelAction,
        DescribeDatasetAction,
        DescribeDatastoreAction,
        DescribeLoggingOptionsAction,
        DescribePipelineAction,
        GetDatasetContentAction,
        ListChannelsAction,
        ListDatasetContentsAction,
        ListDatasetsAction,
        ListDatastoresAction,
        ListPipelinesAction,
        ListTagsForResourceAction,
        PutLoggingOptionsAction,
        RunPipelineActivityAction,
        SampleChannelDataAction,
        StartPipelineReprocessingAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateChannelAction,
        UpdateDatasetAction,
        UpdateDatastoreAction,
        UpdatePipelineAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoTAnalyticsRequest(const Action action);
    IoTAnalyticsRequest(const IoTAnalyticsRequest &other);
    IoTAnalyticsRequest &operator=(const IoTAnalyticsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoTAnalyticsRequest &other) const;


protected:
    /// @cond internal
    explicit IoTAnalyticsRequest(IoTAnalyticsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTAnalyticsRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

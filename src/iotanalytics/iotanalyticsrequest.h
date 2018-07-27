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

#ifndef QTAWS_IOTANALYTICSREQUEST_H
#define QTAWS_IOTANALYTICSREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoTAnalytics {

class IoTAnalyticsRequestPrivate;

class QTAWS_EXPORT IoTAnalyticsRequest : public QtAws::Core::AwsAbstractRequest {

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
    IoTAnalyticsRequest(IoTAnalyticsRequestPrivate * const d);
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

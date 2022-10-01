// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTEVENTSREQUEST_H
#define QTAWS_IOTEVENTSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsioteventsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoTEvents {

class IoTEventsRequestPrivate;

class QTAWSIOTEVENTS_EXPORT IoTEventsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoTEvents.
    enum Action {
        CreateAlarmModelAction,
        CreateDetectorModelAction,
        CreateInputAction,
        DeleteAlarmModelAction,
        DeleteDetectorModelAction,
        DeleteInputAction,
        DescribeAlarmModelAction,
        DescribeDetectorModelAction,
        DescribeDetectorModelAnalysisAction,
        DescribeInputAction,
        DescribeLoggingOptionsAction,
        GetDetectorModelAnalysisResultsAction,
        ListAlarmModelVersionsAction,
        ListAlarmModelsAction,
        ListDetectorModelVersionsAction,
        ListDetectorModelsAction,
        ListInputRoutingsAction,
        ListInputsAction,
        ListTagsForResourceAction,
        PutLoggingOptionsAction,
        StartDetectorModelAnalysisAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAlarmModelAction,
        UpdateDetectorModelAction,
        UpdateInputAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoTEventsRequest(const Action action);
    IoTEventsRequest(const IoTEventsRequest &other);
    IoTEventsRequest &operator=(const IoTEventsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoTEventsRequest &other) const;


protected:
    /// @cond internal
    explicit IoTEventsRequest(IoTEventsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTEventsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

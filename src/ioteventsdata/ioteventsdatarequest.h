// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTEVENTSDATAREQUEST_H
#define QTAWS_IOTEVENTSDATAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsioteventsdataglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoTEventsData {

class IoTEventsDataRequestPrivate;

class QTAWSIOTEVENTSDATA_EXPORT IoTEventsDataRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoTEventsData.
    enum Action {
        BatchAcknowledgeAlarmAction,
        BatchDeleteDetectorAction,
        BatchDisableAlarmAction,
        BatchEnableAlarmAction,
        BatchPutMessageAction,
        BatchResetAlarmAction,
        BatchSnoozeAlarmAction,
        BatchUpdateDetectorAction,
        DescribeAlarmAction,
        DescribeDetectorAction,
        ListAlarmsAction,
        ListDetectorsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoTEventsDataRequest(const Action action);
    IoTEventsDataRequest(const IoTEventsDataRequest &other);
    IoTEventsDataRequest &operator=(const IoTEventsDataRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoTEventsDataRequest &other) const;


protected:
    /// @cond internal
    explicit IoTEventsDataRequest(IoTEventsDataRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTEventsDataRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif

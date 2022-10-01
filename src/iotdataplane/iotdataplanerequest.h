// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTDATAPLANEREQUEST_H
#define QTAWS_IOTDATAPLANEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiotdataplaneglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoTDataPlane {

class IoTDataPlaneRequestPrivate;

class QTAWSIOTDATAPLANE_EXPORT IoTDataPlaneRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoTDataPlane.
    enum Action {
        DeleteThingShadowAction,
        GetRetainedMessageAction,
        GetThingShadowAction,
        ListNamedShadowsForThingAction,
        ListRetainedMessagesAction,
        PublishAction,
        UpdateThingShadowAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoTDataPlaneRequest(const Action action);
    IoTDataPlaneRequest(const IoTDataPlaneRequest &other);
    IoTDataPlaneRequest &operator=(const IoTDataPlaneRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoTDataPlaneRequest &other) const;


protected:
    /// @cond internal
    explicit IoTDataPlaneRequest(IoTDataPlaneRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTDataPlaneRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif

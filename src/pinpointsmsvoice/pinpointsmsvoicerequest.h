// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTSMSVOICEREQUEST_H
#define QTAWS_PINPOINTSMSVOICEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawspinpointsmsvoiceglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace PinpointSmsVoice {

class PinpointSmsVoiceRequestPrivate;

class QTAWSPINPOINTSMSVOICE_EXPORT PinpointSmsVoiceRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by PinpointSmsVoice.
    enum Action {
        CreateConfigurationSetAction,
        CreateConfigurationSetEventDestinationAction,
        DeleteConfigurationSetAction,
        DeleteConfigurationSetEventDestinationAction,
        GetConfigurationSetEventDestinationsAction,
        ListConfigurationSetsAction,
        SendVoiceMessageAction,
        UpdateConfigurationSetEventDestinationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    PinpointSmsVoiceRequest(const Action action);
    PinpointSmsVoiceRequest(const PinpointSmsVoiceRequest &other);
    PinpointSmsVoiceRequest &operator=(const PinpointSmsVoiceRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const PinpointSmsVoiceRequest &other) const;


protected:
    /// @cond internal
    explicit PinpointSmsVoiceRequest(PinpointSmsVoiceRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PinpointSmsVoiceRequest)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif

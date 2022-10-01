// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTSECURETUNNELINGREQUEST_H
#define QTAWS_IOTSECURETUNNELINGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiotsecuretunnelingglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoTSecureTunneling {

class IoTSecureTunnelingRequestPrivate;

class QTAWSIOTSECURETUNNELING_EXPORT IoTSecureTunnelingRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoTSecureTunneling.
    enum Action {
        CloseTunnelAction,
        DescribeTunnelAction,
        ListTagsForResourceAction,
        ListTunnelsAction,
        OpenTunnelAction,
        RotateTunnelAccessTokenAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoTSecureTunnelingRequest(const Action action);
    IoTSecureTunnelingRequest(const IoTSecureTunnelingRequest &other);
    IoTSecureTunnelingRequest &operator=(const IoTSecureTunnelingRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoTSecureTunnelingRequest &other) const;


protected:
    /// @cond internal
    explicit IoTSecureTunnelingRequest(IoTSecureTunnelingRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTSecureTunnelingRequest)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif

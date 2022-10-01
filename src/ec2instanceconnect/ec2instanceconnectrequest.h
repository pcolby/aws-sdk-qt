// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EC2INSTANCECONNECTREQUEST_H
#define QTAWS_EC2INSTANCECONNECTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsec2instanceconnectglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Ec2InstanceConnect {

class Ec2InstanceConnectRequestPrivate;

class QTAWSEC2INSTANCECONNECT_EXPORT Ec2InstanceConnectRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Ec2InstanceConnect.
    enum Action {
        SendSSHPublicKeyAction,
        SendSerialConsoleSSHPublicKeyAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Ec2InstanceConnectRequest(const Action action);
    Ec2InstanceConnectRequest(const Ec2InstanceConnectRequest &other);
    Ec2InstanceConnectRequest &operator=(const Ec2InstanceConnectRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Ec2InstanceConnectRequest &other) const;


protected:
    /// @cond internal
    explicit Ec2InstanceConnectRequest(Ec2InstanceConnectRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Ec2InstanceConnectRequest)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif

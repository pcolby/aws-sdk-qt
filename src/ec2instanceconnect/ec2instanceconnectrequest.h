/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_EC2INSTANCECONNECTREQUEST_H
#define QTAWS_EC2INSTANCECONNECTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsec2instanceconnectglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace EC2InstanceConnect {

class EC2InstanceConnectRequestPrivate;

class QTAWSEC2INSTANCECONNECT_EXPORT EC2InstanceConnectRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by EC2InstanceConnect.
    enum Action {
        SendSSHPublicKeyAction,
        SendSerialConsoleSSHPublicKeyAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EC2InstanceConnectRequest(const Action action);
    EC2InstanceConnectRequest(const EC2InstanceConnectRequest &other);
    EC2InstanceConnectRequest &operator=(const EC2InstanceConnectRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EC2InstanceConnectRequest &other) const;


protected:
    /// @cond internal
    explicit EC2InstanceConnectRequest(EC2InstanceConnectRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EC2InstanceConnectRequest)

};

} // namespace EC2InstanceConnect
} // namespace QtAws

#endif

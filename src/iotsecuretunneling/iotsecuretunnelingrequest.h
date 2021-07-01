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

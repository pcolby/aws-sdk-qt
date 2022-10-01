// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKTELEMETRYREQUEST_H
#define QTAWS_GETNETWORKTELEMETRYREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkTelemetryRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetNetworkTelemetryRequest : public NetworkManagerRequest {

public:
    GetNetworkTelemetryRequest(const GetNetworkTelemetryRequest &other);
    GetNetworkTelemetryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkTelemetryRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

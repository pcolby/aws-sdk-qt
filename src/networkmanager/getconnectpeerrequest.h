// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTPEERREQUEST_H
#define QTAWS_GETCONNECTPEERREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetConnectPeerRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetConnectPeerRequest : public NetworkManagerRequest {

public:
    GetConnectPeerRequest(const GetConnectPeerRequest &other);
    GetConnectPeerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

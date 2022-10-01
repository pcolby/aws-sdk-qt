// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTPEERASSOCIATIONSREQUEST_H
#define QTAWS_GETCONNECTPEERASSOCIATIONSREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetConnectPeerAssociationsRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetConnectPeerAssociationsRequest : public NetworkManagerRequest {

public:
    GetConnectPeerAssociationsRequest(const GetConnectPeerAssociationsRequest &other);
    GetConnectPeerAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectPeerAssociationsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

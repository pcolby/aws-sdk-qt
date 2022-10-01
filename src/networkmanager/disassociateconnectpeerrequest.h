// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTPEERREQUEST_H
#define QTAWS_DISASSOCIATECONNECTPEERREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateConnectPeerRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DisassociateConnectPeerRequest : public NetworkManagerRequest {

public:
    DisassociateConnectPeerRequest(const DisassociateConnectPeerRequest &other);
    DisassociateConnectPeerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONNECTPEERREQUEST_H
#define QTAWS_ASSOCIATECONNECTPEERREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateConnectPeerRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT AssociateConnectPeerRequest : public NetworkManagerRequest {

public:
    AssociateConnectPeerRequest(const AssociateConnectPeerRequest &other);
    AssociateConnectPeerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

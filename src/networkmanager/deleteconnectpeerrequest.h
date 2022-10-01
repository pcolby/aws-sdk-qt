// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTPEERREQUEST_H
#define QTAWS_DELETECONNECTPEERREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteConnectPeerRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DeleteConnectPeerRequest : public NetworkManagerRequest {

public:
    DeleteConnectPeerRequest(const DeleteConnectPeerRequest &other);
    DeleteConnectPeerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

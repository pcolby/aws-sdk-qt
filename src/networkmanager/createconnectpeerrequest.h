// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTPEERREQUEST_H
#define QTAWS_CREATECONNECTPEERREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateConnectPeerRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateConnectPeerRequest : public NetworkManagerRequest {

public:
    CreateConnectPeerRequest(const CreateConnectPeerRequest &other);
    CreateConnectPeerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

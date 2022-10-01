// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONREQUEST_H
#define QTAWS_CREATECONNECTIONREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateConnectionRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateConnectionRequest : public NetworkManagerRequest {

public:
    CreateConnectionRequest(const CreateConnectionRequest &other);
    CreateConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectionRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

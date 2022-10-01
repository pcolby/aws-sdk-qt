// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPEERINGREQUEST_H
#define QTAWS_DELETEPEERINGREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeletePeeringRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DeletePeeringRequest : public NetworkManagerRequest {

public:
    DeletePeeringRequest(const DeletePeeringRequest &other);
    DeletePeeringRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePeeringRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

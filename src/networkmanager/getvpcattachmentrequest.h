// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCATTACHMENTREQUEST_H
#define QTAWS_GETVPCATTACHMENTREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetVpcAttachmentRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetVpcAttachmentRequest : public NetworkManagerRequest {

public:
    GetVpcAttachmentRequest(const GetVpcAttachmentRequest &other);
    GetVpcAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVpcAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

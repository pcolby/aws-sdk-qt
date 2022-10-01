// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCATTACHMENTREQUEST_H
#define QTAWS_UPDATEVPCATTACHMENTREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateVpcAttachmentRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT UpdateVpcAttachmentRequest : public NetworkManagerRequest {

public:
    UpdateVpcAttachmentRequest(const UpdateVpcAttachmentRequest &other);
    UpdateVpcAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVpcAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

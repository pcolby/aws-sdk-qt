// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCATTACHMENTREQUEST_H
#define QTAWS_CREATEVPCATTACHMENTREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateVpcAttachmentRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateVpcAttachmentRequest : public NetworkManagerRequest {

public:
    CreateVpcAttachmentRequest(const CreateVpcAttachmentRequest &other);
    CreateVpcAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

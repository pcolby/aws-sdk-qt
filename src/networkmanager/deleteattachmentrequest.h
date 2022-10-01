// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTACHMENTREQUEST_H
#define QTAWS_DELETEATTACHMENTREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteAttachmentRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DeleteAttachmentRequest : public NetworkManagerRequest {

public:
    DeleteAttachmentRequest(const DeleteAttachmentRequest &other);
    DeleteAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTATTACHMENTREQUEST_H
#define QTAWS_ACCEPTATTACHMENTREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class AcceptAttachmentRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT AcceptAttachmentRequest : public NetworkManagerRequest {

public:
    AcceptAttachmentRequest(const AcceptAttachmentRequest &other);
    AcceptAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTATTACHMENTREQUEST_H
#define QTAWS_REJECTATTACHMENTREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class RejectAttachmentRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT RejectAttachmentRequest : public NetworkManagerRequest {

public:
    RejectAttachmentRequest(const RejectAttachmentRequest &other);
    RejectAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

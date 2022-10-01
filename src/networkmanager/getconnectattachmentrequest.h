// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTATTACHMENTREQUEST_H
#define QTAWS_GETCONNECTATTACHMENTREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetConnectAttachmentRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetConnectAttachmentRequest : public NetworkManagerRequest {

public:
    GetConnectAttachmentRequest(const GetConnectAttachmentRequest &other);
    GetConnectAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

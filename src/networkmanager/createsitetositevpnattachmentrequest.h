// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESITETOSITEVPNATTACHMENTREQUEST_H
#define QTAWS_CREATESITETOSITEVPNATTACHMENTREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateSiteToSiteVpnAttachmentRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateSiteToSiteVpnAttachmentRequest : public NetworkManagerRequest {

public:
    CreateSiteToSiteVpnAttachmentRequest(const CreateSiteToSiteVpnAttachmentRequest &other);
    CreateSiteToSiteVpnAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSiteToSiteVpnAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITETOSITEVPNATTACHMENTREQUEST_H
#define QTAWS_GETSITETOSITEVPNATTACHMENTREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetSiteToSiteVpnAttachmentRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetSiteToSiteVpnAttachmentRequest : public NetworkManagerRequest {

public:
    GetSiteToSiteVpnAttachmentRequest(const GetSiteToSiteVpnAttachmentRequest &other);
    GetSiteToSiteVpnAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSiteToSiteVpnAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

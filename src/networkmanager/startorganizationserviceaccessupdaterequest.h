// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTORGANIZATIONSERVICEACCESSUPDATEREQUEST_H
#define QTAWS_STARTORGANIZATIONSERVICEACCESSUPDATEREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class StartOrganizationServiceAccessUpdateRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT StartOrganizationServiceAccessUpdateRequest : public NetworkManagerRequest {

public:
    StartOrganizationServiceAccessUpdateRequest(const StartOrganizationServiceAccessUpdateRequest &other);
    StartOrganizationServiceAccessUpdateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartOrganizationServiceAccessUpdateRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

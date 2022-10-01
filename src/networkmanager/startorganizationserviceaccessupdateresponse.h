// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTORGANIZATIONSERVICEACCESSUPDATERESPONSE_H
#define QTAWS_STARTORGANIZATIONSERVICEACCESSUPDATERESPONSE_H

#include "networkmanagerresponse.h"
#include "startorganizationserviceaccessupdaterequest.h"

namespace QtAws {
namespace NetworkManager {

class StartOrganizationServiceAccessUpdateResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT StartOrganizationServiceAccessUpdateResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    StartOrganizationServiceAccessUpdateResponse(const StartOrganizationServiceAccessUpdateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartOrganizationServiceAccessUpdateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartOrganizationServiceAccessUpdateResponse)
    Q_DISABLE_COPY(StartOrganizationServiceAccessUpdateResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

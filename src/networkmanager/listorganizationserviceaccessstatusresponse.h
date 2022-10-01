// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONSERVICEACCESSSTATUSRESPONSE_H
#define QTAWS_LISTORGANIZATIONSERVICEACCESSSTATUSRESPONSE_H

#include "networkmanagerresponse.h"
#include "listorganizationserviceaccessstatusrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListOrganizationServiceAccessStatusResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT ListOrganizationServiceAccessStatusResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    ListOrganizationServiceAccessStatusResponse(const ListOrganizationServiceAccessStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOrganizationServiceAccessStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationServiceAccessStatusResponse)
    Q_DISABLE_COPY(ListOrganizationServiceAccessStatusResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

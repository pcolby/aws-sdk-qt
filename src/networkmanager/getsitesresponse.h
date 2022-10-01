// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITESRESPONSE_H
#define QTAWS_GETSITESRESPONSE_H

#include "networkmanagerresponse.h"
#include "getsitesrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetSitesResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetSitesResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetSitesResponse(const GetSitesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSitesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSitesResponse)
    Q_DISABLE_COPY(GetSitesResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

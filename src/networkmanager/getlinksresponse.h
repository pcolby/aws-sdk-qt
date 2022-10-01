// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINKSRESPONSE_H
#define QTAWS_GETLINKSRESPONSE_H

#include "networkmanagerresponse.h"
#include "getlinksrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetLinksResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetLinksResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetLinksResponse(const GetLinksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLinksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLinksResponse)
    Q_DISABLE_COPY(GetLinksResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

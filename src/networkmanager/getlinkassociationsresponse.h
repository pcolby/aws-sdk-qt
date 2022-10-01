// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINKASSOCIATIONSRESPONSE_H
#define QTAWS_GETLINKASSOCIATIONSRESPONSE_H

#include "networkmanagerresponse.h"
#include "getlinkassociationsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetLinkAssociationsResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetLinkAssociationsResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetLinkAssociationsResponse(const GetLinkAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLinkAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLinkAssociationsResponse)
    Q_DISABLE_COPY(GetLinkAssociationsResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

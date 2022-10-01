// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCECOUNTSRESPONSE_H
#define QTAWS_GETNETWORKRESOURCECOUNTSRESPONSE_H

#include "networkmanagerresponse.h"
#include "getnetworkresourcecountsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkResourceCountsResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetNetworkResourceCountsResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetNetworkResourceCountsResponse(const GetNetworkResourceCountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkResourceCountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkResourceCountsResponse)
    Q_DISABLE_COPY(GetNetworkResourceCountsResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

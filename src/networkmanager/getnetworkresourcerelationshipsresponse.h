// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCERELATIONSHIPSRESPONSE_H
#define QTAWS_GETNETWORKRESOURCERELATIONSHIPSRESPONSE_H

#include "networkmanagerresponse.h"
#include "getnetworkresourcerelationshipsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkResourceRelationshipsResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetNetworkResourceRelationshipsResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetNetworkResourceRelationshipsResponse(const GetNetworkResourceRelationshipsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkResourceRelationshipsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkResourceRelationshipsResponse)
    Q_DISABLE_COPY(GetNetworkResourceRelationshipsResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

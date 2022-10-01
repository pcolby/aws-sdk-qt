// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCORENETWORKPOLICYVERSIONSRESPONSE_H
#define QTAWS_LISTCORENETWORKPOLICYVERSIONSRESPONSE_H

#include "networkmanagerresponse.h"
#include "listcorenetworkpolicyversionsrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListCoreNetworkPolicyVersionsResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT ListCoreNetworkPolicyVersionsResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    ListCoreNetworkPolicyVersionsResponse(const ListCoreNetworkPolicyVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCoreNetworkPolicyVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCoreNetworkPolicyVersionsResponse)
    Q_DISABLE_COPY(ListCoreNetworkPolicyVersionsResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

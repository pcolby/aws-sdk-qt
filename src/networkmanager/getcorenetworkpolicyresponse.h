// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKPOLICYRESPONSE_H
#define QTAWS_GETCORENETWORKPOLICYRESPONSE_H

#include "networkmanagerresponse.h"
#include "getcorenetworkpolicyrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkPolicyResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetCoreNetworkPolicyResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetCoreNetworkPolicyResponse(const GetCoreNetworkPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCoreNetworkPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreNetworkPolicyResponse)
    Q_DISABLE_COPY(GetCoreNetworkPolicyResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

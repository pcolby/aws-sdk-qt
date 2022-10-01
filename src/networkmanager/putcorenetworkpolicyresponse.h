// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCORENETWORKPOLICYRESPONSE_H
#define QTAWS_PUTCORENETWORKPOLICYRESPONSE_H

#include "networkmanagerresponse.h"
#include "putcorenetworkpolicyrequest.h"

namespace QtAws {
namespace NetworkManager {

class PutCoreNetworkPolicyResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT PutCoreNetworkPolicyResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    PutCoreNetworkPolicyResponse(const PutCoreNetworkPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutCoreNetworkPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutCoreNetworkPolicyResponse)
    Q_DISABLE_COPY(PutCoreNetworkPolicyResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

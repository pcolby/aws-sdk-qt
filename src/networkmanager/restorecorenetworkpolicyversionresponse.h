// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORECORENETWORKPOLICYVERSIONRESPONSE_H
#define QTAWS_RESTORECORENETWORKPOLICYVERSIONRESPONSE_H

#include "networkmanagerresponse.h"
#include "restorecorenetworkpolicyversionrequest.h"

namespace QtAws {
namespace NetworkManager {

class RestoreCoreNetworkPolicyVersionResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT RestoreCoreNetworkPolicyVersionResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    RestoreCoreNetworkPolicyVersionResponse(const RestoreCoreNetworkPolicyVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreCoreNetworkPolicyVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreCoreNetworkPolicyVersionResponse)
    Q_DISABLE_COPY(RestoreCoreNetworkPolicyVersionResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

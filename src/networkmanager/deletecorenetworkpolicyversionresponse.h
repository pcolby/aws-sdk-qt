// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORENETWORKPOLICYVERSIONRESPONSE_H
#define QTAWS_DELETECORENETWORKPOLICYVERSIONRESPONSE_H

#include "networkmanagerresponse.h"
#include "deletecorenetworkpolicyversionrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteCoreNetworkPolicyVersionResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DeleteCoreNetworkPolicyVersionResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DeleteCoreNetworkPolicyVersionResponse(const DeleteCoreNetworkPolicyVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCoreNetworkPolicyVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCoreNetworkPolicyVersionResponse)
    Q_DISABLE_COPY(DeleteCoreNetworkPolicyVersionResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

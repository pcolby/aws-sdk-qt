// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALNETWORKRESPONSE_H
#define QTAWS_DELETEGLOBALNETWORKRESPONSE_H

#include "networkmanagerresponse.h"
#include "deleteglobalnetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteGlobalNetworkResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DeleteGlobalNetworkResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DeleteGlobalNetworkResponse(const DeleteGlobalNetworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGlobalNetworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGlobalNetworkResponse)
    Q_DISABLE_COPY(DeleteGlobalNetworkResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

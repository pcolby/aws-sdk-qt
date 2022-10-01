// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORENETWORKRESPONSE_H
#define QTAWS_DELETECORENETWORKRESPONSE_H

#include "networkmanagerresponse.h"
#include "deletecorenetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteCoreNetworkResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DeleteCoreNetworkResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DeleteCoreNetworkResponse(const DeleteCoreNetworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCoreNetworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCoreNetworkResponse)
    Q_DISABLE_COPY(DeleteCoreNetworkResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECORENETWORKRESPONSE_H
#define QTAWS_UPDATECORENETWORKRESPONSE_H

#include "networkmanagerresponse.h"
#include "updatecorenetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateCoreNetworkResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT UpdateCoreNetworkResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    UpdateCoreNetworkResponse(const UpdateCoreNetworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCoreNetworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCoreNetworkResponse)
    Q_DISABLE_COPY(UpdateCoreNetworkResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

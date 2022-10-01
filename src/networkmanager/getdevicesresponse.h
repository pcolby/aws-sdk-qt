// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICESRESPONSE_H
#define QTAWS_GETDEVICESRESPONSE_H

#include "networkmanagerresponse.h"
#include "getdevicesrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetDevicesResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetDevicesResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetDevicesResponse(const GetDevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevicesResponse)
    Q_DISABLE_COPY(GetDevicesResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

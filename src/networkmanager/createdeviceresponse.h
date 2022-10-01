// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICERESPONSE_H
#define QTAWS_CREATEDEVICERESPONSE_H

#include "networkmanagerresponse.h"
#include "createdevicerequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateDeviceResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateDeviceResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    CreateDeviceResponse(const CreateDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeviceResponse)
    Q_DISABLE_COPY(CreateDeviceResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

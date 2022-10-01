// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEPROFILERESPONSE_H
#define QTAWS_GETSERVICEPROFILERESPONSE_H

#include "iotwirelessresponse.h"
#include "getserviceprofilerequest.h"

namespace QtAws {
namespace IoTWireless {

class GetServiceProfileResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetServiceProfileResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetServiceProfileResponse(const GetServiceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceProfileResponse)
    Q_DISABLE_COPY(GetServiceProfileResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

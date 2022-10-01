// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEPROFILESRESPONSE_H
#define QTAWS_LISTDEVICEPROFILESRESPONSE_H

#include "iotwirelessresponse.h"
#include "listdeviceprofilesrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListDeviceProfilesResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListDeviceProfilesResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListDeviceProfilesResponse(const ListDeviceProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeviceProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceProfilesResponse)
    Q_DISABLE_COPY(ListDeviceProfilesResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

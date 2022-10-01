// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWIRELESSDEVICESRESPONSE_H
#define QTAWS_LISTWIRELESSDEVICESRESPONSE_H

#include "iotwirelessresponse.h"
#include "listwirelessdevicesrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListWirelessDevicesResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListWirelessDevicesResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListWirelessDevicesResponse(const ListWirelessDevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWirelessDevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWirelessDevicesResponse)
    Q_DISABLE_COPY(ListWirelessDevicesResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

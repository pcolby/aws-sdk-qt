// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEEVENTSRESPONSE_H
#define QTAWS_LISTDEVICEEVENTSRESPONSE_H

#include "iot1clickdevicesresponse.h"
#include "listdeviceeventsrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class ListDeviceEventsResponsePrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT ListDeviceEventsResponse : public IoT1ClickDevicesResponse {
    Q_OBJECT

public:
    ListDeviceEventsResponse(const ListDeviceEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeviceEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceEventsResponse)
    Q_DISABLE_COPY(ListDeviceEventsResponse)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif

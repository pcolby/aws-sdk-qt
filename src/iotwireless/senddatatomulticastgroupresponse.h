// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDDATATOMULTICASTGROUPRESPONSE_H
#define QTAWS_SENDDATATOMULTICASTGROUPRESPONSE_H

#include "iotwirelessresponse.h"
#include "senddatatomulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class SendDataToMulticastGroupResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT SendDataToMulticastGroupResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    SendDataToMulticastGroupResponse(const SendDataToMulticastGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendDataToMulticastGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendDataToMulticastGroupResponse)
    Q_DISABLE_COPY(SendDataToMulticastGroupResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

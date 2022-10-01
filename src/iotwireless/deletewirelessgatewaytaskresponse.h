// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSGATEWAYTASKRESPONSE_H
#define QTAWS_DELETEWIRELESSGATEWAYTASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "deletewirelessgatewaytaskrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessGatewayTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteWirelessGatewayTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DeleteWirelessGatewayTaskResponse(const DeleteWirelessGatewayTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWirelessGatewayTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWirelessGatewayTaskResponse)
    Q_DISABLE_COPY(DeleteWirelessGatewayTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

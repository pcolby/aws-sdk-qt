/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETEWIRELESSGATEWAYTASKRESPONSE_H
#define QTAWS_DELETEWIRELESSGATEWAYTASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "deletewirelessgatewaytaskrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessGatewayTaskResponsePrivate;

class QTAWS_EXPORT DeleteWirelessGatewayTaskResponse : public IoTWirelessResponse {
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

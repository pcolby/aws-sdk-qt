// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWIRELESSGATEWAYSRESPONSE_H
#define QTAWS_LISTWIRELESSGATEWAYSRESPONSE_H

#include "iotwirelessresponse.h"
#include "listwirelessgatewaysrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListWirelessGatewaysResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListWirelessGatewaysResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListWirelessGatewaysResponse(const ListWirelessGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWirelessGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWirelessGatewaysResponse)
    Q_DISABLE_COPY(ListWirelessGatewaysResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

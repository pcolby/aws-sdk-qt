// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDESTINATIONRESPONSE_H
#define QTAWS_GETDESTINATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "getdestinationrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetDestinationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetDestinationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetDestinationResponse(const GetDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDestinationResponse)
    Q_DISABLE_COPY(GetDestinationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

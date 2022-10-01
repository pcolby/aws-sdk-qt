// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOSITIONRESPONSE_H
#define QTAWS_GETPOSITIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "getpositionrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetPositionResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetPositionResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetPositionResponse(const GetPositionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPositionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPositionResponse)
    Q_DISABLE_COPY(GetPositionResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

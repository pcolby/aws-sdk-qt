// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETV2LOGGINGOPTIONSRESPONSE_H
#define QTAWS_GETV2LOGGINGOPTIONSRESPONSE_H

#include "iotresponse.h"
#include "getv2loggingoptionsrequest.h"

namespace QtAws {
namespace IoT {

class GetV2LoggingOptionsResponsePrivate;

class QTAWSIOT_EXPORT GetV2LoggingOptionsResponse : public IoTResponse {
    Q_OBJECT

public:
    GetV2LoggingOptionsResponse(const GetV2LoggingOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetV2LoggingOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetV2LoggingOptionsResponse)
    Q_DISABLE_COPY(GetV2LoggingOptionsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETV2LOGGINGOPTIONSRESPONSE_H
#define QTAWS_SETV2LOGGINGOPTIONSRESPONSE_H

#include "iotresponse.h"
#include "setv2loggingoptionsrequest.h"

namespace QtAws {
namespace IoT {

class SetV2LoggingOptionsResponsePrivate;

class QTAWSIOT_EXPORT SetV2LoggingOptionsResponse : public IoTResponse {
    Q_OBJECT

public:
    SetV2LoggingOptionsResponse(const SetV2LoggingOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetV2LoggingOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetV2LoggingOptionsResponse)
    Q_DISABLE_COPY(SetV2LoggingOptionsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

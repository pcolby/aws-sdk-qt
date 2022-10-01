// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTHINGRESPONSE_H
#define QTAWS_REGISTERTHINGRESPONSE_H

#include "iotresponse.h"
#include "registerthingrequest.h"

namespace QtAws {
namespace IoT {

class RegisterThingResponsePrivate;

class QTAWSIOT_EXPORT RegisterThingResponse : public IoTResponse {
    Q_OBJECT

public:
    RegisterThingResponse(const RegisterThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterThingResponse)
    Q_DISABLE_COPY(RegisterThingResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

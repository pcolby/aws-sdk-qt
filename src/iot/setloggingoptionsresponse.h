// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOGGINGOPTIONSRESPONSE_H
#define QTAWS_SETLOGGINGOPTIONSRESPONSE_H

#include "iotresponse.h"
#include "setloggingoptionsrequest.h"

namespace QtAws {
namespace IoT {

class SetLoggingOptionsResponsePrivate;

class QTAWSIOT_EXPORT SetLoggingOptionsResponse : public IoTResponse {
    Q_OBJECT

public:
    SetLoggingOptionsResponse(const SetLoggingOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetLoggingOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetLoggingOptionsResponse)
    Q_DISABLE_COPY(SetLoggingOptionsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

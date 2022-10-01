// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGINGOPTIONSRESPONSE_H
#define QTAWS_GETLOGGINGOPTIONSRESPONSE_H

#include "iotresponse.h"
#include "getloggingoptionsrequest.h"

namespace QtAws {
namespace IoT {

class GetLoggingOptionsResponsePrivate;

class QTAWSIOT_EXPORT GetLoggingOptionsResponse : public IoTResponse {
    Q_OBJECT

public:
    GetLoggingOptionsResponse(const GetLoggingOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLoggingOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoggingOptionsResponse)
    Q_DISABLE_COPY(GetLoggingOptionsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

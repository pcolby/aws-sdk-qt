// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGINGOPTIONSRESPONSE_P_H
#define QTAWS_GETLOGGINGOPTIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class GetLoggingOptionsResponse;

class GetLoggingOptionsResponsePrivate : public IoTResponsePrivate {

public:

    explicit GetLoggingOptionsResponsePrivate(GetLoggingOptionsResponse * const q);

    void parseGetLoggingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLoggingOptionsResponse)
    Q_DISABLE_COPY(GetLoggingOptionsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

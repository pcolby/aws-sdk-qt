// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOGGINGOPTIONSRESPONSE_P_H
#define QTAWS_SETLOGGINGOPTIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class SetLoggingOptionsResponse;

class SetLoggingOptionsResponsePrivate : public IoTResponsePrivate {

public:

    explicit SetLoggingOptionsResponsePrivate(SetLoggingOptionsResponse * const q);

    void parseSetLoggingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetLoggingOptionsResponse)
    Q_DISABLE_COPY(SetLoggingOptionsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

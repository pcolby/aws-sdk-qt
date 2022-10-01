// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEV2LOGGINGLEVELRESPONSE_P_H
#define QTAWS_DELETEV2LOGGINGLEVELRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteV2LoggingLevelResponse;

class DeleteV2LoggingLevelResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteV2LoggingLevelResponsePrivate(DeleteV2LoggingLevelResponse * const q);

    void parseDeleteV2LoggingLevelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteV2LoggingLevelResponse)
    Q_DISABLE_COPY(DeleteV2LoggingLevelResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

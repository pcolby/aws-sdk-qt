// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTV2LOGGINGLEVELSRESPONSE_P_H
#define QTAWS_LISTV2LOGGINGLEVELSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListV2LoggingLevelsResponse;

class ListV2LoggingLevelsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListV2LoggingLevelsResponsePrivate(ListV2LoggingLevelsResponse * const q);

    void parseListV2LoggingLevelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListV2LoggingLevelsResponse)
    Q_DISABLE_COPY(ListV2LoggingLevelsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

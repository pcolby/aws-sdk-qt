// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGLEVELSBYRESOURCETYPESRESPONSE_P_H
#define QTAWS_UPDATELOGLEVELSBYRESOURCETYPESRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class UpdateLogLevelsByResourceTypesResponse;

class UpdateLogLevelsByResourceTypesResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit UpdateLogLevelsByResourceTypesResponsePrivate(UpdateLogLevelsByResourceTypesResponse * const q);

    void parseUpdateLogLevelsByResourceTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLogLevelsByResourceTypesResponse)
    Q_DISABLE_COPY(UpdateLogLevelsByResourceTypesResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

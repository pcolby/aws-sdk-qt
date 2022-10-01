// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATETHINGTYPERESPONSE_P_H
#define QTAWS_DEPRECATETHINGTYPERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeprecateThingTypeResponse;

class DeprecateThingTypeResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeprecateThingTypeResponsePrivate(DeprecateThingTypeResponse * const q);

    void parseDeprecateThingTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeprecateThingTypeResponse)
    Q_DISABLE_COPY(DeprecateThingTypeResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

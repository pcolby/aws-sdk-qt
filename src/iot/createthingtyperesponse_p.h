// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHINGTYPERESPONSE_P_H
#define QTAWS_CREATETHINGTYPERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateThingTypeResponse;

class CreateThingTypeResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateThingTypeResponsePrivate(CreateThingTypeResponse * const q);

    void parseCreateThingTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateThingTypeResponse)
    Q_DISABLE_COPY(CreateThingTypeResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

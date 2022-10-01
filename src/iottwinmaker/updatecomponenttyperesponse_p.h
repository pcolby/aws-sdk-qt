// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTTYPERESPONSE_P_H
#define QTAWS_UPDATECOMPONENTTYPERESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateComponentTypeResponse;

class UpdateComponentTypeResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit UpdateComponentTypeResponsePrivate(UpdateComponentTypeResponse * const q);

    void parseUpdateComponentTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateComponentTypeResponse)
    Q_DISABLE_COPY(UpdateComponentTypeResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

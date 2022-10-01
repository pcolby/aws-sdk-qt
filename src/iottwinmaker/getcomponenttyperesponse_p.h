// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTTYPERESPONSE_P_H
#define QTAWS_GETCOMPONENTTYPERESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetComponentTypeResponse;

class GetComponentTypeResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit GetComponentTypeResponsePrivate(GetComponentTypeResponse * const q);

    void parseGetComponentTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetComponentTypeResponse)
    Q_DISABLE_COPY(GetComponentTypeResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

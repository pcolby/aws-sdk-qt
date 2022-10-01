// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPONENTTYPERESPONSE_P_H
#define QTAWS_CREATECOMPONENTTYPERESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class CreateComponentTypeResponse;

class CreateComponentTypeResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit CreateComponentTypeResponsePrivate(CreateComponentTypeResponse * const q);

    void parseCreateComponentTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateComponentTypeResponse)
    Q_DISABLE_COPY(CreateComponentTypeResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

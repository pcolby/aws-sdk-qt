// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITYRESPONSE_P_H
#define QTAWS_GETENTITYRESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetEntityResponse;

class GetEntityResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit GetEntityResponsePrivate(GetEntityResponse * const q);

    void parseGetEntityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEntityResponse)
    Q_DISABLE_COPY(GetEntityResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

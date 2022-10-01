// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROPERTYVALUERESPONSE_P_H
#define QTAWS_GETPROPERTYVALUERESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetPropertyValueResponse;

class GetPropertyValueResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit GetPropertyValueResponsePrivate(GetPropertyValueResponse * const q);

    void parseGetPropertyValueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPropertyValueResponse)
    Q_DISABLE_COPY(GetPropertyValueResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

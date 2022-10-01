// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTTYPESRESPONSE_P_H
#define QTAWS_LISTCOMPONENTTYPESRESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListComponentTypesResponse;

class ListComponentTypesResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit ListComponentTypesResponsePrivate(ListComponentTypesResponse * const q);

    void parseListComponentTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListComponentTypesResponse)
    Q_DISABLE_COPY(ListComponentTypesResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

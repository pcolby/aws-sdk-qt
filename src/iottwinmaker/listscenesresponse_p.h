// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCENESRESPONSE_P_H
#define QTAWS_LISTSCENESRESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListScenesResponse;

class ListScenesResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit ListScenesResponsePrivate(ListScenesResponse * const q);

    void parseListScenesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListScenesResponse)
    Q_DISABLE_COPY(ListScenesResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

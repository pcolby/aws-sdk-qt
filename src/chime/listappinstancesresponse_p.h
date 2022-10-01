// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCESRESPONSE_P_H
#define QTAWS_LISTAPPINSTANCESRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListAppInstancesResponse;

class ListAppInstancesResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListAppInstancesResponsePrivate(ListAppInstancesResponse * const q);

    void parseListAppInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppInstancesResponse)
    Q_DISABLE_COPY(ListAppInstancesResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif

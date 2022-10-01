// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENABLEDCONTROLSRESPONSE_P_H
#define QTAWS_LISTENABLEDCONTROLSRESPONSE_P_H

#include "controltowerresponse_p.h"

namespace QtAws {
namespace ControlTower {

class ListEnabledControlsResponse;

class ListEnabledControlsResponsePrivate : public ControlTowerResponsePrivate {

public:

    explicit ListEnabledControlsResponsePrivate(ListEnabledControlsResponse * const q);

    void parseListEnabledControlsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEnabledControlsResponse)
    Q_DISABLE_COPY(ListEnabledControlsResponsePrivate)

};

} // namespace ControlTower
} // namespace QtAws

#endif

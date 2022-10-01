// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHESRESPONSE_P_H
#define QTAWS_LISTLAUNCHESRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class ListLaunchesResponse;

class ListLaunchesResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit ListLaunchesResponsePrivate(ListLaunchesResponse * const q);

    void parseListLaunchesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLaunchesResponse)
    Q_DISABLE_COPY(ListLaunchesResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSTATISTICSRESPONSE_P_H
#define QTAWS_GETFINDINGSTATISTICSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetFindingStatisticsResponse;

class GetFindingStatisticsResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetFindingStatisticsResponsePrivate(GetFindingStatisticsResponse * const q);

    void parseGetFindingStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFindingStatisticsResponse)
    Q_DISABLE_COPY(GetFindingStatisticsResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif

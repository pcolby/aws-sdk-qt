// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOVERAGESTATISTICSRESPONSE_P_H
#define QTAWS_LISTCOVERAGESTATISTICSRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class ListCoverageStatisticsResponse;

class ListCoverageStatisticsResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit ListCoverageStatisticsResponsePrivate(ListCoverageStatisticsResponse * const q);

    void parseListCoverageStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCoverageStatisticsResponse)
    Q_DISABLE_COPY(ListCoverageStatisticsResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif

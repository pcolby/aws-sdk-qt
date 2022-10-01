// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHANALYSESRESPONSE_P_H
#define QTAWS_SEARCHANALYSESRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class SearchAnalysesResponse;

class SearchAnalysesResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit SearchAnalysesResponsePrivate(SearchAnalysesResponse * const q);

    void parseSearchAnalysesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchAnalysesResponse)
    Q_DISABLE_COPY(SearchAnalysesResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

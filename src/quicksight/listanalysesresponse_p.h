// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANALYSESRESPONSE_P_H
#define QTAWS_LISTANALYSESRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListAnalysesResponse;

class ListAnalysesResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListAnalysesResponsePrivate(ListAnalysesResponse * const q);

    void parseListAnalysesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAnalysesResponse)
    Q_DISABLE_COPY(ListAnalysesResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSRESPONSE_P_H
#define QTAWS_LISTDATASETSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListDataSetsResponse;

class ListDataSetsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListDataSetsResponsePrivate(ListDataSetsResponse * const q);

    void parseListDataSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataSetsResponse)
    Q_DISABLE_COPY(ListDataSetsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

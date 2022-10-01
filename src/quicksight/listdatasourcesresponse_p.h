// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCESRESPONSE_P_H
#define QTAWS_LISTDATASOURCESRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListDataSourcesResponse;

class ListDataSourcesResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListDataSourcesResponsePrivate(ListDataSourcesResponse * const q);

    void parseListDataSourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataSourcesResponse)
    Q_DISABLE_COPY(ListDataSourcesResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

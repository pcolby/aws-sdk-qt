// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHGROUPSRESPONSE_P_H
#define QTAWS_SEARCHGROUPSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class SearchGroupsResponse;

class SearchGroupsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit SearchGroupsResponsePrivate(SearchGroupsResponse * const q);

    void parseSearchGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchGroupsResponse)
    Q_DISABLE_COPY(SearchGroupsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

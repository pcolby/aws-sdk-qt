// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFOLDERSRESPONSE_P_H
#define QTAWS_SEARCHFOLDERSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class SearchFoldersResponse;

class SearchFoldersResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit SearchFoldersResponsePrivate(SearchFoldersResponse * const q);

    void parseSearchFoldersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchFoldersResponse)
    Q_DISABLE_COPY(SearchFoldersResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

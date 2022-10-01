// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFOLDERSRESPONSE_P_H
#define QTAWS_LISTFOLDERSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListFoldersResponse;

class ListFoldersResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListFoldersResponsePrivate(ListFoldersResponse * const q);

    void parseListFoldersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFoldersResponse)
    Q_DISABLE_COPY(ListFoldersResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

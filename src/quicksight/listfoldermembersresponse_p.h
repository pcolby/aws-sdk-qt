// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFOLDERMEMBERSRESPONSE_P_H
#define QTAWS_LISTFOLDERMEMBERSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListFolderMembersResponse;

class ListFolderMembersResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListFolderMembersResponsePrivate(ListFolderMembersResponse * const q);

    void parseListFolderMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFolderMembersResponse)
    Q_DISABLE_COPY(ListFolderMembersResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

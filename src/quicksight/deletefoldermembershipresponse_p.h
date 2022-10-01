// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERMEMBERSHIPRESPONSE_P_H
#define QTAWS_DELETEFOLDERMEMBERSHIPRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteFolderMembershipResponse;

class DeleteFolderMembershipResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteFolderMembershipResponsePrivate(DeleteFolderMembershipResponse * const q);

    void parseDeleteFolderMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFolderMembershipResponse)
    Q_DISABLE_COPY(DeleteFolderMembershipResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

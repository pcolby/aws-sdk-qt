// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPMEMBERSHIPRESPONSE_P_H
#define QTAWS_DELETEGROUPMEMBERSHIPRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteGroupMembershipResponse;

class DeleteGroupMembershipResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteGroupMembershipResponsePrivate(DeleteGroupMembershipResponse * const q);

    void parseDeleteGroupMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGroupMembershipResponse)
    Q_DISABLE_COPY(DeleteGroupMembershipResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

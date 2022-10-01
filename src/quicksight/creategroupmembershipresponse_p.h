// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPMEMBERSHIPRESPONSE_P_H
#define QTAWS_CREATEGROUPMEMBERSHIPRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateGroupMembershipResponse;

class CreateGroupMembershipResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateGroupMembershipResponsePrivate(CreateGroupMembershipResponse * const q);

    void parseCreateGroupMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGroupMembershipResponse)
    Q_DISABLE_COPY(CreateGroupMembershipResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

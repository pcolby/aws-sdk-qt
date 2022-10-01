// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPRESPONSE_P_H
#define QTAWS_CREATEGROUPRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateGroupResponse;

class CreateGroupResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateGroupResponsePrivate(CreateGroupResponse * const q);

    void parseCreateGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGroupResponse)
    Q_DISABLE_COPY(CreateGroupResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

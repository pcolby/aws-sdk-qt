// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPRESPONSE_P_H
#define QTAWS_GETGROUPRESPONSE_P_H

#include "resourcegroupsresponse_p.h"

namespace QtAws {
namespace ResourceGroups {

class GetGroupResponse;

class GetGroupResponsePrivate : public ResourceGroupsResponsePrivate {

public:

    explicit GetGroupResponsePrivate(GetGroupResponse * const q);

    void parseGetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGroupResponse)
    Q_DISABLE_COPY(GetGroupResponsePrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GROUPRESOURCESRESPONSE_P_H
#define QTAWS_GROUPRESOURCESRESPONSE_P_H

#include "resourcegroupsresponse_p.h"

namespace QtAws {
namespace ResourceGroups {

class GroupResourcesResponse;

class GroupResourcesResponsePrivate : public ResourceGroupsResponsePrivate {

public:

    explicit GroupResourcesResponsePrivate(GroupResourcesResponse * const q);

    void parseGroupResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GroupResourcesResponse)
    Q_DISABLE_COPY(GroupResourcesResponsePrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNGROUPRESOURCESRESPONSE_P_H
#define QTAWS_UNGROUPRESOURCESRESPONSE_P_H

#include "resourcegroupsresponse_p.h"

namespace QtAws {
namespace ResourceGroups {

class UngroupResourcesResponse;

class UngroupResourcesResponsePrivate : public ResourceGroupsResponsePrivate {

public:

    explicit UngroupResourcesResponsePrivate(UngroupResourcesResponse * const q);

    void parseUngroupResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UngroupResourcesResponse)
    Q_DISABLE_COPY(UngroupResourcesResponsePrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

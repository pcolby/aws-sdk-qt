// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPRESOURCESRESPONSE_P_H
#define QTAWS_LISTGROUPRESOURCESRESPONSE_P_H

#include "resourcegroupsresponse_p.h"

namespace QtAws {
namespace ResourceGroups {

class ListGroupResourcesResponse;

class ListGroupResourcesResponsePrivate : public ResourceGroupsResponsePrivate {

public:

    explicit ListGroupResourcesResponsePrivate(ListGroupResourcesResponse * const q);

    void parseListGroupResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGroupResourcesResponse)
    Q_DISABLE_COPY(ListGroupResourcesResponsePrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

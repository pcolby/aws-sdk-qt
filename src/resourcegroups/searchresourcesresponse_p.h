// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHRESOURCESRESPONSE_P_H
#define QTAWS_SEARCHRESOURCESRESPONSE_P_H

#include "resourcegroupsresponse_p.h"

namespace QtAws {
namespace ResourceGroups {

class SearchResourcesResponse;

class SearchResourcesResponsePrivate : public ResourceGroupsResponsePrivate {

public:

    explicit SearchResourcesResponsePrivate(SearchResourcesResponse * const q);

    void parseSearchResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchResourcesResponse)
    Q_DISABLE_COPY(SearchResourcesResponsePrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

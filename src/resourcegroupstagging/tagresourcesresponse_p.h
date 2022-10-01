// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCESRESPONSE_P_H
#define QTAWS_TAGRESOURCESRESPONSE_P_H

#include "resourcegroupstaggingresponse_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class TagResourcesResponse;

class TagResourcesResponsePrivate : public ResourceGroupsTaggingResponsePrivate {

public:

    explicit TagResourcesResponsePrivate(TagResourcesResponse * const q);

    void parseTagResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagResourcesResponse)
    Q_DISABLE_COPY(TagResourcesResponsePrivate)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif

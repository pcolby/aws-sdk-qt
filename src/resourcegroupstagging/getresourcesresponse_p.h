// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESRESPONSE_P_H
#define QTAWS_GETRESOURCESRESPONSE_P_H

#include "resourcegroupstaggingresponse_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetResourcesResponse;

class GetResourcesResponsePrivate : public ResourceGroupsTaggingResponsePrivate {

public:

    explicit GetResourcesResponsePrivate(GetResourcesResponse * const q);

    void parseGetResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourcesResponse)
    Q_DISABLE_COPY(GetResourcesResponsePrivate)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif

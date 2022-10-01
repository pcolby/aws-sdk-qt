// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCESRESPONSE_P_H
#define QTAWS_UNTAGRESOURCESRESPONSE_P_H

#include "resourcegroupstaggingresponse_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class UntagResourcesResponse;

class UntagResourcesResponsePrivate : public ResourceGroupsTaggingResponsePrivate {

public:

    explicit UntagResourcesResponsePrivate(UntagResourcesResponse * const q);

    void parseUntagResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagResourcesResponse)
    Q_DISABLE_COPY(UntagResourcesResponsePrivate)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif

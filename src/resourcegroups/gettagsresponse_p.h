// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGSRESPONSE_P_H
#define QTAWS_GETTAGSRESPONSE_P_H

#include "resourcegroupsresponse_p.h"

namespace QtAws {
namespace ResourceGroups {

class GetTagsResponse;

class GetTagsResponsePrivate : public ResourceGroupsResponsePrivate {

public:

    explicit GetTagsResponsePrivate(GetTagsResponse * const q);

    void parseGetTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTagsResponse)
    Q_DISABLE_COPY(GetTagsResponsePrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

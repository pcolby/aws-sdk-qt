// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESPONSE_P_H
#define QTAWS_TAGRESPONSE_P_H

#include "resourcegroupsresponse_p.h"

namespace QtAws {
namespace ResourceGroups {

class TagResponse;

class TagResponsePrivate : public ResourceGroupsResponsePrivate {

public:

    explicit TagResponsePrivate(TagResponse * const q);

    void parseTagResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagResponse)
    Q_DISABLE_COPY(TagResponsePrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

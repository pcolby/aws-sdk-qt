// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORPROJECTRESPONSE_P_H
#define QTAWS_LISTTAGSFORPROJECTRESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class ListTagsForProjectResponse;

class ListTagsForProjectResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit ListTagsForProjectResponsePrivate(ListTagsForProjectResponse * const q);

    void parseListTagsForProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsForProjectResponse)
    Q_DISABLE_COPY(ListTagsForProjectResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif

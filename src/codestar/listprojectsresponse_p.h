// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTSRESPONSE_P_H
#define QTAWS_LISTPROJECTSRESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class ListProjectsResponse;

class ListProjectsResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit ListProjectsResponsePrivate(ListProjectsResponse * const q);

    void parseListProjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProjectsResponse)
    Q_DISABLE_COPY(ListProjectsResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif

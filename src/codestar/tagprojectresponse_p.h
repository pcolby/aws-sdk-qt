// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGPROJECTRESPONSE_P_H
#define QTAWS_TAGPROJECTRESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class TagProjectResponse;

class TagProjectResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit TagProjectResponsePrivate(TagProjectResponse * const q);

    void parseTagProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagProjectResponse)
    Q_DISABLE_COPY(TagProjectResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif

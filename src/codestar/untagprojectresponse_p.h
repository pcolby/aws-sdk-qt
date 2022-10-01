// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGPROJECTRESPONSE_P_H
#define QTAWS_UNTAGPROJECTRESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class UntagProjectResponse;

class UntagProjectResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit UntagProjectResponsePrivate(UntagProjectResponse * const q);

    void parseUntagProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagProjectResponse)
    Q_DISABLE_COPY(UntagProjectResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif

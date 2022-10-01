// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVALIDATEPROJECTCACHERESPONSE_P_H
#define QTAWS_INVALIDATEPROJECTCACHERESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class InvalidateProjectCacheResponse;

class InvalidateProjectCacheResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit InvalidateProjectCacheResponsePrivate(InvalidateProjectCacheResponse * const q);

    void parseInvalidateProjectCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InvalidateProjectCacheResponse)
    Q_DISABLE_COPY(InvalidateProjectCacheResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

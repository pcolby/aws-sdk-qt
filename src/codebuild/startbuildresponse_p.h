// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBUILDRESPONSE_P_H
#define QTAWS_STARTBUILDRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class StartBuildResponse;

class StartBuildResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit StartBuildResponsePrivate(StartBuildResponse * const q);

    void parseStartBuildResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartBuildResponse)
    Q_DISABLE_COPY(StartBuildResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

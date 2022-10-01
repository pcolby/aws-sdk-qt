// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBUILDRESPONSE_P_H
#define QTAWS_STOPBUILDRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class StopBuildResponse;

class StopBuildResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit StopBuildResponsePrivate(StopBuildResponse * const q);

    void parseStopBuildResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopBuildResponse)
    Q_DISABLE_COPY(StopBuildResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

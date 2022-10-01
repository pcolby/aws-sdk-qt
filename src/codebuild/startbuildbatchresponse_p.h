// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBUILDBATCHRESPONSE_P_H
#define QTAWS_STARTBUILDBATCHRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class StartBuildBatchResponse;

class StartBuildBatchResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit StartBuildBatchResponsePrivate(StartBuildBatchResponse * const q);

    void parseStartBuildBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartBuildBatchResponse)
    Q_DISABLE_COPY(StartBuildBatchResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

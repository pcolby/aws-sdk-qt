// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBUILDBATCHRESPONSE_P_H
#define QTAWS_STOPBUILDBATCHRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class StopBuildBatchResponse;

class StopBuildBatchResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit StopBuildBatchResponsePrivate(StopBuildBatchResponse * const q);

    void parseStopBuildBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopBuildBatchResponse)
    Q_DISABLE_COPY(StopBuildBatchResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

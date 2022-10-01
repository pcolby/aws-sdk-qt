// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYBUILDBATCHRESPONSE_P_H
#define QTAWS_RETRYBUILDBATCHRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class RetryBuildBatchResponse;

class RetryBuildBatchResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit RetryBuildBatchResponsePrivate(RetryBuildBatchResponse * const q);

    void parseRetryBuildBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RetryBuildBatchResponse)
    Q_DISABLE_COPY(RetryBuildBatchResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

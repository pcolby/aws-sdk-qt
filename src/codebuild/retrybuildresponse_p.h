// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYBUILDRESPONSE_P_H
#define QTAWS_RETRYBUILDRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class RetryBuildResponse;

class RetryBuildResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit RetryBuildResponsePrivate(RetryBuildResponse * const q);

    void parseRetryBuildResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RetryBuildResponse)
    Q_DISABLE_COPY(RetryBuildResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

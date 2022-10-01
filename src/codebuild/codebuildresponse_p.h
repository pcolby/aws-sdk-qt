// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEBUILDRESPONSE_P_H
#define QTAWS_CODEBUILDRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class CodeBuildResponse;

class CodeBuildResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CodeBuildResponsePrivate(CodeBuildResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CodeBuildResponse)
    Q_DISABLE_COPY(CodeBuildResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

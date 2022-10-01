// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEARTIFACTRESPONSE_P_H
#define QTAWS_CODEARTIFACTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class CodeArtifactResponse;

class CodeArtifactResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CodeArtifactResponsePrivate(CodeArtifactResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CodeArtifactResponse)
    Q_DISABLE_COPY(CodeArtifactResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

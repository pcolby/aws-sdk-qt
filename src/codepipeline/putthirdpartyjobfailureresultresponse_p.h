// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTHIRDPARTYJOBFAILURERESULTRESPONSE_P_H
#define QTAWS_PUTTHIRDPARTYJOBFAILURERESULTRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class PutThirdPartyJobFailureResultResponse;

class PutThirdPartyJobFailureResultResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit PutThirdPartyJobFailureResultResponsePrivate(PutThirdPartyJobFailureResultResponse * const q);

    void parsePutThirdPartyJobFailureResultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutThirdPartyJobFailureResultResponse)
    Q_DISABLE_COPY(PutThirdPartyJobFailureResultResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

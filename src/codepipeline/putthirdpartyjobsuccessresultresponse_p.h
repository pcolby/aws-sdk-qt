// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTHIRDPARTYJOBSUCCESSRESULTRESPONSE_P_H
#define QTAWS_PUTTHIRDPARTYJOBSUCCESSRESULTRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class PutThirdPartyJobSuccessResultResponse;

class PutThirdPartyJobSuccessResultResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit PutThirdPartyJobSuccessResultResponsePrivate(PutThirdPartyJobSuccessResultResponse * const q);

    void parsePutThirdPartyJobSuccessResultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutThirdPartyJobSuccessResultResponse)
    Q_DISABLE_COPY(PutThirdPartyJobSuccessResultResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

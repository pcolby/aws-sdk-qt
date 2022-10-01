// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTHIRDPARTYJOBFAILURERESULTRESPONSE_H
#define QTAWS_PUTTHIRDPARTYJOBFAILURERESULTRESPONSE_H

#include "codepipelineresponse.h"
#include "putthirdpartyjobfailureresultrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutThirdPartyJobFailureResultResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT PutThirdPartyJobFailureResultResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    PutThirdPartyJobFailureResultResponse(const PutThirdPartyJobFailureResultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutThirdPartyJobFailureResultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutThirdPartyJobFailureResultResponse)
    Q_DISABLE_COPY(PutThirdPartyJobFailureResultResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

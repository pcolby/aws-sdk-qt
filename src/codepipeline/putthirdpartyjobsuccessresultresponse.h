// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTHIRDPARTYJOBSUCCESSRESULTRESPONSE_H
#define QTAWS_PUTTHIRDPARTYJOBSUCCESSRESULTRESPONSE_H

#include "codepipelineresponse.h"
#include "putthirdpartyjobsuccessresultrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutThirdPartyJobSuccessResultResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT PutThirdPartyJobSuccessResultResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    PutThirdPartyJobSuccessResultResponse(const PutThirdPartyJobSuccessResultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutThirdPartyJobSuccessResultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutThirdPartyJobSuccessResultResponse)
    Q_DISABLE_COPY(PutThirdPartyJobSuccessResultResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTJOBFAILURERESULTRESPONSE_H
#define QTAWS_PUTJOBFAILURERESULTRESPONSE_H

#include "codepipelineresponse.h"
#include "putjobfailureresultrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutJobFailureResultResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT PutJobFailureResultResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    PutJobFailureResultResponse(const PutJobFailureResultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutJobFailureResultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutJobFailureResultResponse)
    Q_DISABLE_COPY(PutJobFailureResultResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

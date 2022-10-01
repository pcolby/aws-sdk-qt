// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTJOBSUCCESSRESULTRESPONSE_H
#define QTAWS_PUTJOBSUCCESSRESULTRESPONSE_H

#include "codepipelineresponse.h"
#include "putjobsuccessresultrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutJobSuccessResultResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT PutJobSuccessResultResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    PutJobSuccessResultResponse(const PutJobSuccessResultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutJobSuccessResultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutJobSuccessResultResponse)
    Q_DISABLE_COPY(PutJobSuccessResultResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

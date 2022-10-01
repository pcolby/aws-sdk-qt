// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPROVALRESULTRESPONSE_H
#define QTAWS_PUTAPPROVALRESULTRESPONSE_H

#include "codepipelineresponse.h"
#include "putapprovalresultrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutApprovalResultResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT PutApprovalResultResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    PutApprovalResultResponse(const PutApprovalResultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutApprovalResultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutApprovalResultResponse)
    Q_DISABLE_COPY(PutApprovalResultResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

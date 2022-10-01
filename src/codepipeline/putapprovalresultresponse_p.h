// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPROVALRESULTRESPONSE_P_H
#define QTAWS_PUTAPPROVALRESULTRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class PutApprovalResultResponse;

class PutApprovalResultResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit PutApprovalResultResponsePrivate(PutApprovalResultResponse * const q);

    void parsePutApprovalResultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutApprovalResultResponse)
    Q_DISABLE_COPY(PutApprovalResultResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

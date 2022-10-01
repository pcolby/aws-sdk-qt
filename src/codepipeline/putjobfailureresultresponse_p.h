// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTJOBFAILURERESULTRESPONSE_P_H
#define QTAWS_PUTJOBFAILURERESULTRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class PutJobFailureResultResponse;

class PutJobFailureResultResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit PutJobFailureResultResponsePrivate(PutJobFailureResultResponse * const q);

    void parsePutJobFailureResultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutJobFailureResultResponse)
    Q_DISABLE_COPY(PutJobFailureResultResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

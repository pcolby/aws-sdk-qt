// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTJOBSUCCESSRESULTRESPONSE_P_H
#define QTAWS_PUTJOBSUCCESSRESULTRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class PutJobSuccessResultResponse;

class PutJobSuccessResultResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit PutJobSuccessResultResponsePrivate(PutJobSuccessResultResponse * const q);

    void parsePutJobSuccessResultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutJobSuccessResultResponse)
    Q_DISABLE_COPY(PutJobSuccessResultResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

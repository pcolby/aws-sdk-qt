// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEGURUREVIEWERRESPONSE_P_H
#define QTAWS_CODEGURUREVIEWERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

class CodeGuruReviewerResponse;

class CodeGuruReviewerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CodeGuruReviewerResponsePrivate(CodeGuruReviewerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CodeGuruReviewerResponse)
    Q_DISABLE_COPY(CodeGuruReviewerResponsePrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

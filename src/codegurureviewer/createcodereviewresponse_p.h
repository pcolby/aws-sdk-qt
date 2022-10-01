// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECODEREVIEWRESPONSE_P_H
#define QTAWS_CREATECODEREVIEWRESPONSE_P_H

#include "codegurureviewerresponse_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

class CreateCodeReviewResponse;

class CreateCodeReviewResponsePrivate : public CodeGuruReviewerResponsePrivate {

public:

    explicit CreateCodeReviewResponsePrivate(CreateCodeReviewResponse * const q);

    void parseCreateCodeReviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCodeReviewResponse)
    Q_DISABLE_COPY(CreateCodeReviewResponsePrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

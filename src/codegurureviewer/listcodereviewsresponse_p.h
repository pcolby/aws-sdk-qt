// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCODEREVIEWSRESPONSE_P_H
#define QTAWS_LISTCODEREVIEWSRESPONSE_P_H

#include "codegurureviewerresponse_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListCodeReviewsResponse;

class ListCodeReviewsResponsePrivate : public CodeGuruReviewerResponsePrivate {

public:

    explicit ListCodeReviewsResponsePrivate(ListCodeReviewsResponse * const q);

    void parseListCodeReviewsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCodeReviewsResponse)
    Q_DISABLE_COPY(ListCodeReviewsResponsePrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

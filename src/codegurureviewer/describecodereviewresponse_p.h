// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODEREVIEWRESPONSE_P_H
#define QTAWS_DESCRIBECODEREVIEWRESPONSE_P_H

#include "codegurureviewerresponse_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DescribeCodeReviewResponse;

class DescribeCodeReviewResponsePrivate : public CodeGuruReviewerResponsePrivate {

public:

    explicit DescribeCodeReviewResponsePrivate(DescribeCodeReviewResponse * const q);

    void parseDescribeCodeReviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCodeReviewResponse)
    Q_DISABLE_COPY(DescribeCodeReviewResponsePrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

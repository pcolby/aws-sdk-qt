// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYPHRASESDETECTIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBEKEYPHRASESDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribeKeyPhrasesDetectionJobResponse;

class DescribeKeyPhrasesDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribeKeyPhrasesDetectionJobResponsePrivate(DescribeKeyPhrasesDetectionJobResponse * const q);

    void parseDescribeKeyPhrasesDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeKeyPhrasesDetectionJobResponse)
    Q_DISABLE_COPY(DescribeKeyPhrasesDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif

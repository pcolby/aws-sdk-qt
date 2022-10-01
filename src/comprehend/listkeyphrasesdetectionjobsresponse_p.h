// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYPHRASESDETECTIONJOBSRESPONSE_P_H
#define QTAWS_LISTKEYPHRASESDETECTIONJOBSRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListKeyPhrasesDetectionJobsResponse;

class ListKeyPhrasesDetectionJobsResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListKeyPhrasesDetectionJobsResponsePrivate(ListKeyPhrasesDetectionJobsResponse * const q);

    void parseListKeyPhrasesDetectionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListKeyPhrasesDetectionJobsResponse)
    Q_DISABLE_COPY(ListKeyPhrasesDetectionJobsResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif

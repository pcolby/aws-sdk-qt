// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICSDETECTIONJOBSRESPONSE_P_H
#define QTAWS_LISTTOPICSDETECTIONJOBSRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListTopicsDetectionJobsResponse;

class ListTopicsDetectionJobsResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListTopicsDetectionJobsResponsePrivate(ListTopicsDetectionJobsResponse * const q);

    void parseListTopicsDetectionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTopicsDetectionJobsResponse)
    Q_DISABLE_COPY(ListTopicsDetectionJobsResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif

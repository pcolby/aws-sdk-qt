// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTJOBSRESPONSE_P_H
#define QTAWS_LISTDEPLOYMENTJOBSRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class ListDeploymentJobsResponse;

class ListDeploymentJobsResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit ListDeploymentJobsResponsePrivate(ListDeploymentJobsResponse * const q);

    void parseListDeploymentJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeploymentJobsResponse)
    Q_DISABLE_COPY(ListDeploymentJobsResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDGENERATIONJOBSRESPONSE_P_H
#define QTAWS_LISTWORLDGENERATIONJOBSRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldGenerationJobsResponse;

class ListWorldGenerationJobsResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit ListWorldGenerationJobsResponsePrivate(ListWorldGenerationJobsResponse * const q);

    void parseListWorldGenerationJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorldGenerationJobsResponse)
    Q_DISABLE_COPY(ListWorldGenerationJobsResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

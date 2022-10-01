// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDEXPORTJOBSRESPONSE_P_H
#define QTAWS_LISTWORLDEXPORTJOBSRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldExportJobsResponse;

class ListWorldExportJobsResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit ListWorldExportJobsResponsePrivate(ListWorldExportJobsResponse * const q);

    void parseListWorldExportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorldExportJobsResponse)
    Q_DISABLE_COPY(ListWorldExportJobsResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

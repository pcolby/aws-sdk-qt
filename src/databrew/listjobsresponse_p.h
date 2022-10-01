// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSRESPONSE_P_H
#define QTAWS_LISTJOBSRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class ListJobsResponse;

class ListJobsResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit ListJobsResponsePrivate(ListJobsResponse * const q);

    void parseListJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListJobsResponse)
    Q_DISABLE_COPY(ListJobsResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif

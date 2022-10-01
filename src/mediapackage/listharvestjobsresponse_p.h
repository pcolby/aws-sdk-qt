// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHARVESTJOBSRESPONSE_P_H
#define QTAWS_LISTHARVESTJOBSRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class ListHarvestJobsResponse;

class ListHarvestJobsResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit ListHarvestJobsResponsePrivate(ListHarvestJobsResponse * const q);

    void parseListHarvestJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHarvestJobsResponse)
    Q_DISABLE_COPY(ListHarvestJobsResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

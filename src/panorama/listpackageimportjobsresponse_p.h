// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEIMPORTJOBSRESPONSE_P_H
#define QTAWS_LISTPACKAGEIMPORTJOBSRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class ListPackageImportJobsResponse;

class ListPackageImportJobsResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit ListPackageImportJobsResponsePrivate(ListPackageImportJobsResponse * const q);

    void parseListPackageImportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPackageImportJobsResponse)
    Q_DISABLE_COPY(ListPackageImportJobsResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif

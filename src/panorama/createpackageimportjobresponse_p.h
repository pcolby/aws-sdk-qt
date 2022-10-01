// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGEIMPORTJOBRESPONSE_P_H
#define QTAWS_CREATEPACKAGEIMPORTJOBRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class CreatePackageImportJobResponse;

class CreatePackageImportJobResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit CreatePackageImportJobResponsePrivate(CreatePackageImportJobResponse * const q);

    void parseCreatePackageImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePackageImportJobResponse)
    Q_DISABLE_COPY(CreatePackageImportJobResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGERESPONSE_P_H
#define QTAWS_DELETEPACKAGERESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class DeletePackageResponse;

class DeletePackageResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit DeletePackageResponsePrivate(DeletePackageResponse * const q);

    void parseDeletePackageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePackageResponse)
    Q_DISABLE_COPY(DeletePackageResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif

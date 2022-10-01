// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERPACKAGEVERSIONRESPONSE_P_H
#define QTAWS_DEREGISTERPACKAGEVERSIONRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class DeregisterPackageVersionResponse;

class DeregisterPackageVersionResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit DeregisterPackageVersionResponsePrivate(DeregisterPackageVersionResponse * const q);

    void parseDeregisterPackageVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterPackageVersionResponse)
    Q_DISABLE_COPY(DeregisterPackageVersionResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif

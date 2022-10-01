// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERPACKAGEVERSIONRESPONSE_P_H
#define QTAWS_REGISTERPACKAGEVERSIONRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class RegisterPackageVersionResponse;

class RegisterPackageVersionResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit RegisterPackageVersionResponsePrivate(RegisterPackageVersionResponse * const q);

    void parseRegisterPackageVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterPackageVersionResponse)
    Q_DISABLE_COPY(RegisterPackageVersionResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif

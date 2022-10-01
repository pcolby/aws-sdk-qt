// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORIGINENDPOINTRESPONSE_P_H
#define QTAWS_UPDATEORIGINENDPOINTRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class UpdateOriginEndpointResponse;

class UpdateOriginEndpointResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit UpdateOriginEndpointResponsePrivate(UpdateOriginEndpointResponse * const q);

    void parseUpdateOriginEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateOriginEndpointResponse)
    Q_DISABLE_COPY(UpdateOriginEndpointResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

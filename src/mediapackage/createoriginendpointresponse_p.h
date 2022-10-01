// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORIGINENDPOINTRESPONSE_P_H
#define QTAWS_CREATEORIGINENDPOINTRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class CreateOriginEndpointResponse;

class CreateOriginEndpointResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit CreateOriginEndpointResponsePrivate(CreateOriginEndpointResponse * const q);

    void parseCreateOriginEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOriginEndpointResponse)
    Q_DISABLE_COPY(CreateOriginEndpointResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

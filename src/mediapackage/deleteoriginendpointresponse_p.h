// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORIGINENDPOINTRESPONSE_P_H
#define QTAWS_DELETEORIGINENDPOINTRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class DeleteOriginEndpointResponse;

class DeleteOriginEndpointResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit DeleteOriginEndpointResponsePrivate(DeleteOriginEndpointResponse * const q);

    void parseDeleteOriginEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOriginEndpointResponse)
    Q_DISABLE_COPY(DeleteOriginEndpointResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

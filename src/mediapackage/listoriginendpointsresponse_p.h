// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINENDPOINTSRESPONSE_P_H
#define QTAWS_LISTORIGINENDPOINTSRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class ListOriginEndpointsResponse;

class ListOriginEndpointsResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit ListOriginEndpointsResponsePrivate(ListOriginEndpointsResponse * const q);

    void parseListOriginEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOriginEndpointsResponse)
    Q_DISABLE_COPY(ListOriginEndpointsResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

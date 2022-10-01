// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTSBYPLATFORMAPPLICATIONRESPONSE_P_H
#define QTAWS_LISTENDPOINTSBYPLATFORMAPPLICATIONRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class ListEndpointsByPlatformApplicationResponse;

class ListEndpointsByPlatformApplicationResponsePrivate : public SnsResponsePrivate {

public:

    explicit ListEndpointsByPlatformApplicationResponsePrivate(ListEndpointsByPlatformApplicationResponse * const q);

    void parseListEndpointsByPlatformApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEndpointsByPlatformApplicationResponse)
    Q_DISABLE_COPY(ListEndpointsByPlatformApplicationResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif

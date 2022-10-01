// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACEROUTERESPONSE_P_H
#define QTAWS_REPLACEROUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ReplaceRouteResponse;

class ReplaceRouteResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ReplaceRouteResponsePrivate(ReplaceRouteResponse * const q);

    void parseReplaceRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReplaceRouteResponse)
    Q_DISABLE_COPY(ReplaceRouteResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

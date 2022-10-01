// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGERESPONSE_P_H
#define QTAWS_GETCHANGERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetChangeResponse;

class GetChangeResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetChangeResponsePrivate(GetChangeResponse * const q);

    void parseGetChangeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChangeResponse)
    Q_DISABLE_COPY(GetChangeResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

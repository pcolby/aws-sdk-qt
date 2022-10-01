// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHEALTHCHECKSRESPONSE_P_H
#define QTAWS_LISTHEALTHCHECKSRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListHealthChecksResponse;

class ListHealthChecksResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListHealthChecksResponsePrivate(ListHealthChecksResponse * const q);

    void parseListHealthChecksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHealthChecksResponse)
    Q_DISABLE_COPY(ListHealthChecksResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

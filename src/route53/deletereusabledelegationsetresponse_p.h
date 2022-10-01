// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREUSABLEDELEGATIONSETRESPONSE_P_H
#define QTAWS_DELETEREUSABLEDELEGATIONSETRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class DeleteReusableDelegationSetResponse;

class DeleteReusableDelegationSetResponsePrivate : public Route53ResponsePrivate {

public:

    explicit DeleteReusableDelegationSetResponsePrivate(DeleteReusableDelegationSetResponse * const q);

    void parseDeleteReusableDelegationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReusableDelegationSetResponse)
    Q_DISABLE_COPY(DeleteReusableDelegationSetResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

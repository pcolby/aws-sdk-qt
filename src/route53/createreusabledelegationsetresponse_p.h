// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREUSABLEDELEGATIONSETRESPONSE_P_H
#define QTAWS_CREATEREUSABLEDELEGATIONSETRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class CreateReusableDelegationSetResponse;

class CreateReusableDelegationSetResponsePrivate : public Route53ResponsePrivate {

public:

    explicit CreateReusableDelegationSetResponsePrivate(CreateReusableDelegationSetResponse * const q);

    void parseCreateReusableDelegationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReusableDelegationSetResponse)
    Q_DISABLE_COPY(CreateReusableDelegationSetResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

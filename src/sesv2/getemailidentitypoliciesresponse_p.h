// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILIDENTITYPOLICIESRESPONSE_P_H
#define QTAWS_GETEMAILIDENTITYPOLICIESRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetEmailIdentityPoliciesResponse;

class GetEmailIdentityPoliciesResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetEmailIdentityPoliciesResponsePrivate(GetEmailIdentityPoliciesResponse * const q);

    void parseGetEmailIdentityPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEmailIdentityPoliciesResponse)
    Q_DISABLE_COPY(GetEmailIdentityPoliciesResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif

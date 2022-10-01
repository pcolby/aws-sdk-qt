// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPOLICIESRESPONSE_P_H
#define QTAWS_GETIDENTITYPOLICIESRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class GetIdentityPoliciesResponse;

class GetIdentityPoliciesResponsePrivate : public SesResponsePrivate {

public:

    explicit GetIdentityPoliciesResponsePrivate(GetIdentityPoliciesResponse * const q);

    void parseGetIdentityPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIdentityPoliciesResponse)
    Q_DISABLE_COPY(GetIdentityPoliciesResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif

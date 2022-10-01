// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPOLICIESRESPONSE_P_H
#define QTAWS_LISTIDENTITYPOLICIESRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class ListIdentityPoliciesResponse;

class ListIdentityPoliciesResponsePrivate : public SesResponsePrivate {

public:

    explicit ListIdentityPoliciesResponsePrivate(ListIdentityPoliciesResponse * const q);

    void parseListIdentityPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIdentityPoliciesResponse)
    Q_DISABLE_COPY(ListIdentityPoliciesResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPOLICIESRESPONSE_P_H
#define QTAWS_LISTSECURITYPOLICIESRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class ListSecurityPoliciesResponse;

class ListSecurityPoliciesResponsePrivate : public TransferResponsePrivate {

public:

    explicit ListSecurityPoliciesResponsePrivate(ListSecurityPoliciesResponse * const q);

    void parseListSecurityPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSecurityPoliciesResponse)
    Q_DISABLE_COPY(ListSecurityPoliciesResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif

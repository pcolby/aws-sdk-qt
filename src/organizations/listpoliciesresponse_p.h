// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESRESPONSE_P_H
#define QTAWS_LISTPOLICIESRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListPoliciesResponse;

class ListPoliciesResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListPoliciesResponsePrivate(ListPoliciesResponse * const q);

    void parseListPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPoliciesResponse)
    Q_DISABLE_COPY(ListPoliciesResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif

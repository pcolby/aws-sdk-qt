// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESFORTARGETRESPONSE_P_H
#define QTAWS_LISTPOLICIESFORTARGETRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListPoliciesForTargetResponse;

class ListPoliciesForTargetResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListPoliciesForTargetResponsePrivate(ListPoliciesForTargetResponse * const q);

    void parseListPoliciesForTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPoliciesForTargetResponse)
    Q_DISABLE_COPY(ListPoliciesForTargetResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif

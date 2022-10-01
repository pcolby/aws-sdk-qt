// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIAMPOLICYASSIGNMENTSRESPONSE_P_H
#define QTAWS_LISTIAMPOLICYASSIGNMENTSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListIAMPolicyAssignmentsResponse;

class ListIAMPolicyAssignmentsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListIAMPolicyAssignmentsResponsePrivate(ListIAMPolicyAssignmentsResponse * const q);

    void parseListIAMPolicyAssignmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIAMPolicyAssignmentsResponse)
    Q_DISABLE_COPY(ListIAMPolicyAssignmentsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

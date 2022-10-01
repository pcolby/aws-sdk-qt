// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIAMPOLICYASSIGNMENTSFORUSERRESPONSE_P_H
#define QTAWS_LISTIAMPOLICYASSIGNMENTSFORUSERRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListIAMPolicyAssignmentsForUserResponse;

class ListIAMPolicyAssignmentsForUserResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListIAMPolicyAssignmentsForUserResponsePrivate(ListIAMPolicyAssignmentsForUserResponse * const q);

    void parseListIAMPolicyAssignmentsForUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIAMPolicyAssignmentsForUserResponse)
    Q_DISABLE_COPY(ListIAMPolicyAssignmentsForUserResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

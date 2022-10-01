// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIAMPOLICYASSIGNMENTRESPONSE_P_H
#define QTAWS_UPDATEIAMPOLICYASSIGNMENTRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateIAMPolicyAssignmentResponse;

class UpdateIAMPolicyAssignmentResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateIAMPolicyAssignmentResponsePrivate(UpdateIAMPolicyAssignmentResponse * const q);

    void parseUpdateIAMPolicyAssignmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateIAMPolicyAssignmentResponse)
    Q_DISABLE_COPY(UpdateIAMPolicyAssignmentResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

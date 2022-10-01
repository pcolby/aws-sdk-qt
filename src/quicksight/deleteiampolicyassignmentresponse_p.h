// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIAMPOLICYASSIGNMENTRESPONSE_P_H
#define QTAWS_DELETEIAMPOLICYASSIGNMENTRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteIAMPolicyAssignmentResponse;

class DeleteIAMPolicyAssignmentResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteIAMPolicyAssignmentResponsePrivate(DeleteIAMPolicyAssignmentResponse * const q);

    void parseDeleteIAMPolicyAssignmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIAMPolicyAssignmentResponse)
    Q_DISABLE_COPY(DeleteIAMPolicyAssignmentResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif

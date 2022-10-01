// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPROVEASSIGNMENTRESPONSE_P_H
#define QTAWS_APPROVEASSIGNMENTRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class ApproveAssignmentResponse;

class ApproveAssignmentResponsePrivate : public MTurkResponsePrivate {

public:

    explicit ApproveAssignmentResponsePrivate(ApproveAssignmentResponse * const q);

    void parseApproveAssignmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApproveAssignmentResponse)
    Q_DISABLE_COPY(ApproveAssignmentResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif

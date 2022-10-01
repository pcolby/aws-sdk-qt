// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTASSIGNMENTRESPONSE_P_H
#define QTAWS_REJECTASSIGNMENTRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class RejectAssignmentResponse;

class RejectAssignmentResponsePrivate : public MTurkResponsePrivate {

public:

    explicit RejectAssignmentResponsePrivate(RejectAssignmentResponse * const q);

    void parseRejectAssignmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectAssignmentResponse)
    Q_DISABLE_COPY(RejectAssignmentResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif

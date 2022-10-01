// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSIGNMENTRESPONSE_P_H
#define QTAWS_GETASSIGNMENTRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class GetAssignmentResponse;

class GetAssignmentResponsePrivate : public MTurkResponsePrivate {

public:

    explicit GetAssignmentResponsePrivate(GetAssignmentResponse * const q);

    void parseGetAssignmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssignmentResponse)
    Q_DISABLE_COPY(GetAssignmentResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif

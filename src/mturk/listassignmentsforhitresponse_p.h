// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSIGNMENTSFORHITRESPONSE_P_H
#define QTAWS_LISTASSIGNMENTSFORHITRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class ListAssignmentsForHITResponse;

class ListAssignmentsForHITResponsePrivate : public MTurkResponsePrivate {

public:

    explicit ListAssignmentsForHITResponsePrivate(ListAssignmentsForHITResponse * const q);

    void parseListAssignmentsForHITResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssignmentsForHITResponse)
    Q_DISABLE_COPY(ListAssignmentsForHITResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif

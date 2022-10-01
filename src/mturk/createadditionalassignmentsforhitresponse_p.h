// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDITIONALASSIGNMENTSFORHITRESPONSE_P_H
#define QTAWS_CREATEADDITIONALASSIGNMENTSFORHITRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class CreateAdditionalAssignmentsForHITResponse;

class CreateAdditionalAssignmentsForHITResponsePrivate : public MTurkResponsePrivate {

public:

    explicit CreateAdditionalAssignmentsForHITResponsePrivate(CreateAdditionalAssignmentsForHITResponse * const q);

    void parseCreateAdditionalAssignmentsForHITResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAdditionalAssignmentsForHITResponse)
    Q_DISABLE_COPY(CreateAdditionalAssignmentsForHITResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif

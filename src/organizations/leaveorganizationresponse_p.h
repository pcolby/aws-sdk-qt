// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEAVEORGANIZATIONRESPONSE_P_H
#define QTAWS_LEAVEORGANIZATIONRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class LeaveOrganizationResponse;

class LeaveOrganizationResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit LeaveOrganizationResponsePrivate(LeaveOrganizationResponse * const q);

    void parseLeaveOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LeaveOrganizationResponse)
    Q_DISABLE_COPY(LeaveOrganizationResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEAVEORGANIZATIONREQUEST_P_H
#define QTAWS_LEAVEORGANIZATIONREQUEST_P_H

#include "organizationsrequest_p.h"
#include "leaveorganizationrequest.h"

namespace QtAws {
namespace Organizations {

class LeaveOrganizationRequest;

class LeaveOrganizationRequestPrivate : public OrganizationsRequestPrivate {

public:
    LeaveOrganizationRequestPrivate(const OrganizationsRequest::Action action,
                                   LeaveOrganizationRequest * const q);
    LeaveOrganizationRequestPrivate(const LeaveOrganizationRequestPrivate &other,
                                   LeaveOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(LeaveOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif

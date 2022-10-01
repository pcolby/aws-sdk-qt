// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEPOLICYTYPEREQUEST_P_H
#define QTAWS_DISABLEPOLICYTYPEREQUEST_P_H

#include "organizationsrequest_p.h"
#include "disablepolicytyperequest.h"

namespace QtAws {
namespace Organizations {

class DisablePolicyTypeRequest;

class DisablePolicyTypeRequestPrivate : public OrganizationsRequestPrivate {

public:
    DisablePolicyTypeRequestPrivate(const OrganizationsRequest::Action action,
                                   DisablePolicyTypeRequest * const q);
    DisablePolicyTypeRequestPrivate(const DisablePolicyTypeRequestPrivate &other,
                                   DisablePolicyTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisablePolicyTypeRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif

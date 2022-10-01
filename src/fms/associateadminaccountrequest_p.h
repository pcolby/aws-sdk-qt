// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEADMINACCOUNTREQUEST_P_H
#define QTAWS_ASSOCIATEADMINACCOUNTREQUEST_P_H

#include "fmsrequest_p.h"
#include "associateadminaccountrequest.h"

namespace QtAws {
namespace Fms {

class AssociateAdminAccountRequest;

class AssociateAdminAccountRequestPrivate : public FmsRequestPrivate {

public:
    AssociateAdminAccountRequestPrivate(const FmsRequest::Action action,
                                   AssociateAdminAccountRequest * const q);
    AssociateAdminAccountRequestPrivate(const AssociateAdminAccountRequestPrivate &other,
                                   AssociateAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateAdminAccountRequest)

};

} // namespace Fms
} // namespace QtAws

#endif

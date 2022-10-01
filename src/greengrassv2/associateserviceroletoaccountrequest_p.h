// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEROLETOACCOUNTREQUEST_P_H
#define QTAWS_ASSOCIATESERVICEROLETOACCOUNTREQUEST_P_H

#include "greengrassv2request_p.h"
#include "associateserviceroletoaccountrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class AssociateServiceRoleToAccountRequest;

class AssociateServiceRoleToAccountRequestPrivate : public GreengrassV2RequestPrivate {

public:
    AssociateServiceRoleToAccountRequestPrivate(const GreengrassV2Request::Action action,
                                   AssociateServiceRoleToAccountRequest * const q);
    AssociateServiceRoleToAccountRequestPrivate(const AssociateServiceRoleToAccountRequestPrivate &other,
                                   AssociateServiceRoleToAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateServiceRoleToAccountRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif

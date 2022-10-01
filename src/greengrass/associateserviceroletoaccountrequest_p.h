// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEROLETOACCOUNTREQUEST_P_H
#define QTAWS_ASSOCIATESERVICEROLETOACCOUNTREQUEST_P_H

#include "greengrassrequest_p.h"
#include "associateserviceroletoaccountrequest.h"

namespace QtAws {
namespace Greengrass {

class AssociateServiceRoleToAccountRequest;

class AssociateServiceRoleToAccountRequestPrivate : public GreengrassRequestPrivate {

public:
    AssociateServiceRoleToAccountRequestPrivate(const GreengrassRequest::Action action,
                                   AssociateServiceRoleToAccountRequest * const q);
    AssociateServiceRoleToAccountRequestPrivate(const AssociateServiceRoleToAccountRequestPrivate &other,
                                   AssociateServiceRoleToAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateServiceRoleToAccountRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif

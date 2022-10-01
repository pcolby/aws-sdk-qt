// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDEFAULTCREDITSPECIFICATIONREQUEST_P_H
#define QTAWS_MODIFYDEFAULTCREDITSPECIFICATIONREQUEST_P_H

#include "ec2request_p.h"
#include "modifydefaultcreditspecificationrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyDefaultCreditSpecificationRequest;

class ModifyDefaultCreditSpecificationRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyDefaultCreditSpecificationRequestPrivate(const Ec2Request::Action action,
                                   ModifyDefaultCreditSpecificationRequest * const q);
    ModifyDefaultCreditSpecificationRequestPrivate(const ModifyDefaultCreditSpecificationRequestPrivate &other,
                                   ModifyDefaultCreditSpecificationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDefaultCreditSpecificationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

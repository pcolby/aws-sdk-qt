// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCECREDITSPECIFICATIONREQUEST_P_H
#define QTAWS_MODIFYINSTANCECREDITSPECIFICATIONREQUEST_P_H

#include "ec2request_p.h"
#include "modifyinstancecreditspecificationrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceCreditSpecificationRequest;

class ModifyInstanceCreditSpecificationRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyInstanceCreditSpecificationRequestPrivate(const Ec2Request::Action action,
                                   ModifyInstanceCreditSpecificationRequest * const q);
    ModifyInstanceCreditSpecificationRequestPrivate(const ModifyInstanceCreditSpecificationRequestPrivate &other,
                                   ModifyInstanceCreditSpecificationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceCreditSpecificationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

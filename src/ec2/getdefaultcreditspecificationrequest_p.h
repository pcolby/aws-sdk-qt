// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEFAULTCREDITSPECIFICATIONREQUEST_P_H
#define QTAWS_GETDEFAULTCREDITSPECIFICATIONREQUEST_P_H

#include "ec2request_p.h"
#include "getdefaultcreditspecificationrequest.h"

namespace QtAws {
namespace Ec2 {

class GetDefaultCreditSpecificationRequest;

class GetDefaultCreditSpecificationRequestPrivate : public Ec2RequestPrivate {

public:
    GetDefaultCreditSpecificationRequestPrivate(const Ec2Request::Action action,
                                   GetDefaultCreditSpecificationRequest * const q);
    GetDefaultCreditSpecificationRequestPrivate(const GetDefaultCreditSpecificationRequestPrivate &other,
                                   GetDefaultCreditSpecificationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDefaultCreditSpecificationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

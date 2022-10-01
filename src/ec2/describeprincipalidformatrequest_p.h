// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRINCIPALIDFORMATREQUEST_P_H
#define QTAWS_DESCRIBEPRINCIPALIDFORMATREQUEST_P_H

#include "ec2request_p.h"
#include "describeprincipalidformatrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribePrincipalIdFormatRequest;

class DescribePrincipalIdFormatRequestPrivate : public Ec2RequestPrivate {

public:
    DescribePrincipalIdFormatRequestPrivate(const Ec2Request::Action action,
                                   DescribePrincipalIdFormatRequest * const q);
    DescribePrincipalIdFormatRequestPrivate(const DescribePrincipalIdFormatRequestPrivate &other,
                                   DescribePrincipalIdFormatRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePrincipalIdFormatRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

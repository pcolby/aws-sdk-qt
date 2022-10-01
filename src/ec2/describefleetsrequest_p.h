// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETSREQUEST_P_H
#define QTAWS_DESCRIBEFLEETSREQUEST_P_H

#include "ec2request_p.h"
#include "describefleetsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeFleetsRequest;

class DescribeFleetsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeFleetsRequestPrivate(const Ec2Request::Action action,
                                   DescribeFleetsRequest * const q);
    DescribeFleetsRequestPrivate(const DescribeFleetsRequestPrivate &other,
                                   DescribeFleetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

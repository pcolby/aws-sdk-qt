// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEHOSTSREQUEST_P_H
#define QTAWS_ALLOCATEHOSTSREQUEST_P_H

#include "ec2request_p.h"
#include "allocatehostsrequest.h"

namespace QtAws {
namespace Ec2 {

class AllocateHostsRequest;

class AllocateHostsRequestPrivate : public Ec2RequestPrivate {

public:
    AllocateHostsRequestPrivate(const Ec2Request::Action action,
                                   AllocateHostsRequest * const q);
    AllocateHostsRequestPrivate(const AllocateHostsRequestPrivate &other,
                                   AllocateHostsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AllocateHostsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

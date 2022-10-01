// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEHOSTSREQUEST_P_H
#define QTAWS_RELEASEHOSTSREQUEST_P_H

#include "ec2request_p.h"
#include "releasehostsrequest.h"

namespace QtAws {
namespace Ec2 {

class ReleaseHostsRequest;

class ReleaseHostsRequestPrivate : public Ec2RequestPrivate {

public:
    ReleaseHostsRequestPrivate(const Ec2Request::Action action,
                                   ReleaseHostsRequest * const q);
    ReleaseHostsRequestPrivate(const ReleaseHostsRequestPrivate &other,
                                   ReleaseHostsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReleaseHostsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

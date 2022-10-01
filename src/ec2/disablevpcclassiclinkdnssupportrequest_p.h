// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEVPCCLASSICLINKDNSSUPPORTREQUEST_P_H
#define QTAWS_DISABLEVPCCLASSICLINKDNSSUPPORTREQUEST_P_H

#include "ec2request_p.h"
#include "disablevpcclassiclinkdnssupportrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableVpcClassicLinkDnsSupportRequest;

class DisableVpcClassicLinkDnsSupportRequestPrivate : public Ec2RequestPrivate {

public:
    DisableVpcClassicLinkDnsSupportRequestPrivate(const Ec2Request::Action action,
                                   DisableVpcClassicLinkDnsSupportRequest * const q);
    DisableVpcClassicLinkDnsSupportRequestPrivate(const DisableVpcClassicLinkDnsSupportRequestPrivate &other,
                                   DisableVpcClassicLinkDnsSupportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableVpcClassicLinkDnsSupportRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

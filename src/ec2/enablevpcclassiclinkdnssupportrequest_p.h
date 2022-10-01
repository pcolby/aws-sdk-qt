// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVPCCLASSICLINKDNSSUPPORTREQUEST_P_H
#define QTAWS_ENABLEVPCCLASSICLINKDNSSUPPORTREQUEST_P_H

#include "ec2request_p.h"
#include "enablevpcclassiclinkdnssupportrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableVpcClassicLinkDnsSupportRequest;

class EnableVpcClassicLinkDnsSupportRequestPrivate : public Ec2RequestPrivate {

public:
    EnableVpcClassicLinkDnsSupportRequestPrivate(const Ec2Request::Action action,
                                   EnableVpcClassicLinkDnsSupportRequest * const q);
    EnableVpcClassicLinkDnsSupportRequestPrivate(const EnableVpcClassicLinkDnsSupportRequestPrivate &other,
                                   EnableVpcClassicLinkDnsSupportRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableVpcClassicLinkDnsSupportRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEVPCCLASSICLINKREQUEST_P_H
#define QTAWS_DISABLEVPCCLASSICLINKREQUEST_P_H

#include "ec2request_p.h"
#include "disablevpcclassiclinkrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableVpcClassicLinkRequest;

class DisableVpcClassicLinkRequestPrivate : public Ec2RequestPrivate {

public:
    DisableVpcClassicLinkRequestPrivate(const Ec2Request::Action action,
                                   DisableVpcClassicLinkRequest * const q);
    DisableVpcClassicLinkRequestPrivate(const DisableVpcClassicLinkRequestPrivate &other,
                                   DisableVpcClassicLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableVpcClassicLinkRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

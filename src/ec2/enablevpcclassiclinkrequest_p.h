// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVPCCLASSICLINKREQUEST_P_H
#define QTAWS_ENABLEVPCCLASSICLINKREQUEST_P_H

#include "ec2request_p.h"
#include "enablevpcclassiclinkrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableVpcClassicLinkRequest;

class EnableVpcClassicLinkRequestPrivate : public Ec2RequestPrivate {

public:
    EnableVpcClassicLinkRequestPrivate(const Ec2Request::Action action,
                                   EnableVpcClassicLinkRequest * const q);
    EnableVpcClassicLinkRequestPrivate(const EnableVpcClassicLinkRequestPrivate &other,
                                   EnableVpcClassicLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableVpcClassicLinkRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

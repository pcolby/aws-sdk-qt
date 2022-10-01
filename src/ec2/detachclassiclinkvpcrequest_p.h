// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHCLASSICLINKVPCREQUEST_P_H
#define QTAWS_DETACHCLASSICLINKVPCREQUEST_P_H

#include "ec2request_p.h"
#include "detachclassiclinkvpcrequest.h"

namespace QtAws {
namespace Ec2 {

class DetachClassicLinkVpcRequest;

class DetachClassicLinkVpcRequestPrivate : public Ec2RequestPrivate {

public:
    DetachClassicLinkVpcRequestPrivate(const Ec2Request::Action action,
                                   DetachClassicLinkVpcRequest * const q);
    DetachClassicLinkVpcRequestPrivate(const DetachClassicLinkVpcRequestPrivate &other,
                                   DetachClassicLinkVpcRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachClassicLinkVpcRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

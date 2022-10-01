// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHCLASSICLINKVPCREQUEST_P_H
#define QTAWS_ATTACHCLASSICLINKVPCREQUEST_P_H

#include "ec2request_p.h"
#include "attachclassiclinkvpcrequest.h"

namespace QtAws {
namespace Ec2 {

class AttachClassicLinkVpcRequest;

class AttachClassicLinkVpcRequestPrivate : public Ec2RequestPrivate {

public:
    AttachClassicLinkVpcRequestPrivate(const Ec2Request::Action action,
                                   AttachClassicLinkVpcRequest * const q);
    AttachClassicLinkVpcRequestPrivate(const AttachClassicLinkVpcRequestPrivate &other,
                                   AttachClassicLinkVpcRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachClassicLinkVpcRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

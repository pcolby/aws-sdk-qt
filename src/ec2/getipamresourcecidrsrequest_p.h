// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMRESOURCECIDRSREQUEST_P_H
#define QTAWS_GETIPAMRESOURCECIDRSREQUEST_P_H

#include "ec2request_p.h"
#include "getipamresourcecidrsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetIpamResourceCidrsRequest;

class GetIpamResourceCidrsRequestPrivate : public Ec2RequestPrivate {

public:
    GetIpamResourceCidrsRequestPrivate(const Ec2Request::Action action,
                                   GetIpamResourceCidrsRequest * const q);
    GetIpamResourceCidrsRequestPrivate(const GetIpamResourceCidrsRequestPrivate &other,
                                   GetIpamResourceCidrsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIpamResourceCidrsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

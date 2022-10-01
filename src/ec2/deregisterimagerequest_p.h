// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERIMAGEREQUEST_P_H
#define QTAWS_DEREGISTERIMAGEREQUEST_P_H

#include "ec2request_p.h"
#include "deregisterimagerequest.h"

namespace QtAws {
namespace Ec2 {

class DeregisterImageRequest;

class DeregisterImageRequestPrivate : public Ec2RequestPrivate {

public:
    DeregisterImageRequestPrivate(const Ec2Request::Action action,
                                   DeregisterImageRequest * const q);
    DeregisterImageRequestPrivate(const DeregisterImageRequestPrivate &other,
                                   DeregisterImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

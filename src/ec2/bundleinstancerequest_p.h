// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUNDLEINSTANCEREQUEST_P_H
#define QTAWS_BUNDLEINSTANCEREQUEST_P_H

#include "ec2request_p.h"
#include "bundleinstancerequest.h"

namespace QtAws {
namespace Ec2 {

class BundleInstanceRequest;

class BundleInstanceRequestPrivate : public Ec2RequestPrivate {

public:
    BundleInstanceRequestPrivate(const Ec2Request::Action action,
                                   BundleInstanceRequest * const q);
    BundleInstanceRequestPrivate(const BundleInstanceRequestPrivate &other,
                                   BundleInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(BundleInstanceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

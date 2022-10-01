// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREMANAGEDPREFIXLISTVERSIONREQUEST_P_H
#define QTAWS_RESTOREMANAGEDPREFIXLISTVERSIONREQUEST_P_H

#include "ec2request_p.h"
#include "restoremanagedprefixlistversionrequest.h"

namespace QtAws {
namespace Ec2 {

class RestoreManagedPrefixListVersionRequest;

class RestoreManagedPrefixListVersionRequestPrivate : public Ec2RequestPrivate {

public:
    RestoreManagedPrefixListVersionRequestPrivate(const Ec2Request::Action action,
                                   RestoreManagedPrefixListVersionRequest * const q);
    RestoreManagedPrefixListVersionRequestPrivate(const RestoreManagedPrefixListVersionRequestPrivate &other,
                                   RestoreManagedPrefixListVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreManagedPrefixListVersionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

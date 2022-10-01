// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDPREFIXLISTSREQUEST_P_H
#define QTAWS_DESCRIBEMANAGEDPREFIXLISTSREQUEST_P_H

#include "ec2request_p.h"
#include "describemanagedprefixlistsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeManagedPrefixListsRequest;

class DescribeManagedPrefixListsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeManagedPrefixListsRequestPrivate(const Ec2Request::Action action,
                                   DescribeManagedPrefixListsRequest * const q);
    DescribeManagedPrefixListsRequestPrivate(const DescribeManagedPrefixListsRequestPrivate &other,
                                   DescribeManagedPrefixListsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeManagedPrefixListsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

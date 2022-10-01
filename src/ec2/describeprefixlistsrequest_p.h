// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPREFIXLISTSREQUEST_P_H
#define QTAWS_DESCRIBEPREFIXLISTSREQUEST_P_H

#include "ec2request_p.h"
#include "describeprefixlistsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribePrefixListsRequest;

class DescribePrefixListsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribePrefixListsRequestPrivate(const Ec2Request::Action action,
                                   DescribePrefixListsRequest * const q);
    DescribePrefixListsRequestPrivate(const DescribePrefixListsRequestPrivate &other,
                                   DescribePrefixListsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePrefixListsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

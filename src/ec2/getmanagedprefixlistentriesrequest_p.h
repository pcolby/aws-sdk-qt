// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDPREFIXLISTENTRIESREQUEST_P_H
#define QTAWS_GETMANAGEDPREFIXLISTENTRIESREQUEST_P_H

#include "ec2request_p.h"
#include "getmanagedprefixlistentriesrequest.h"

namespace QtAws {
namespace Ec2 {

class GetManagedPrefixListEntriesRequest;

class GetManagedPrefixListEntriesRequestPrivate : public Ec2RequestPrivate {

public:
    GetManagedPrefixListEntriesRequestPrivate(const Ec2Request::Action action,
                                   GetManagedPrefixListEntriesRequest * const q);
    GetManagedPrefixListEntriesRequestPrivate(const GetManagedPrefixListEntriesRequestPrivate &other,
                                   GetManagedPrefixListEntriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetManagedPrefixListEntriesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

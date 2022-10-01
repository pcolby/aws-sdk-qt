// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDPREFIXLISTASSOCIATIONSREQUEST_P_H
#define QTAWS_GETMANAGEDPREFIXLISTASSOCIATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "getmanagedprefixlistassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetManagedPrefixListAssociationsRequest;

class GetManagedPrefixListAssociationsRequestPrivate : public Ec2RequestPrivate {

public:
    GetManagedPrefixListAssociationsRequestPrivate(const Ec2Request::Action action,
                                   GetManagedPrefixListAssociationsRequest * const q);
    GetManagedPrefixListAssociationsRequestPrivate(const GetManagedPrefixListAssociationsRequestPrivate &other,
                                   GetManagedPrefixListAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetManagedPrefixListAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

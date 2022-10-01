// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMANAGEDPREFIXLISTREQUEST_P_H
#define QTAWS_DELETEMANAGEDPREFIXLISTREQUEST_P_H

#include "ec2request_p.h"
#include "deletemanagedprefixlistrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteManagedPrefixListRequest;

class DeleteManagedPrefixListRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteManagedPrefixListRequestPrivate(const Ec2Request::Action action,
                                   DeleteManagedPrefixListRequest * const q);
    DeleteManagedPrefixListRequestPrivate(const DeleteManagedPrefixListRequestPrivate &other,
                                   DeleteManagedPrefixListRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteManagedPrefixListRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

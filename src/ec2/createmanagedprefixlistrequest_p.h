// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMANAGEDPREFIXLISTREQUEST_P_H
#define QTAWS_CREATEMANAGEDPREFIXLISTREQUEST_P_H

#include "ec2request_p.h"
#include "createmanagedprefixlistrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateManagedPrefixListRequest;

class CreateManagedPrefixListRequestPrivate : public Ec2RequestPrivate {

public:
    CreateManagedPrefixListRequestPrivate(const Ec2Request::Action action,
                                   CreateManagedPrefixListRequest * const q);
    CreateManagedPrefixListRequestPrivate(const CreateManagedPrefixListRequestPrivate &other,
                                   CreateManagedPrefixListRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateManagedPrefixListRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

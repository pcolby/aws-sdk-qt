// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYMANAGEDPREFIXLISTREQUEST_P_H
#define QTAWS_MODIFYMANAGEDPREFIXLISTREQUEST_P_H

#include "ec2request_p.h"
#include "modifymanagedprefixlistrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyManagedPrefixListRequest;

class ModifyManagedPrefixListRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyManagedPrefixListRequestPrivate(const Ec2Request::Action action,
                                   ModifyManagedPrefixListRequest * const q);
    ModifyManagedPrefixListRequestPrivate(const ModifyManagedPrefixListRequestPrivate &other,
                                   ModifyManagedPrefixListRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyManagedPrefixListRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

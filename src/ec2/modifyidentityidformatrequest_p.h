// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIDENTITYIDFORMATREQUEST_P_H
#define QTAWS_MODIFYIDENTITYIDFORMATREQUEST_P_H

#include "ec2request_p.h"
#include "modifyidentityidformatrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyIdentityIdFormatRequest;

class ModifyIdentityIdFormatRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyIdentityIdFormatRequestPrivate(const Ec2Request::Action action,
                                   ModifyIdentityIdFormatRequest * const q);
    ModifyIdentityIdFormatRequestPrivate(const ModifyIdentityIdFormatRequestPrivate &other,
                                   ModifyIdentityIdFormatRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyIdentityIdFormatRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

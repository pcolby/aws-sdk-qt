// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYFPGAIMAGEATTRIBUTEREQUEST_P_H
#define QTAWS_MODIFYFPGAIMAGEATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "modifyfpgaimageattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyFpgaImageAttributeRequest;

class ModifyFpgaImageAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyFpgaImageAttributeRequestPrivate(const Ec2Request::Action action,
                                   ModifyFpgaImageAttributeRequest * const q);
    ModifyFpgaImageAttributeRequestPrivate(const ModifyFpgaImageAttributeRequestPrivate &other,
                                   ModifyFpgaImageAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyFpgaImageAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

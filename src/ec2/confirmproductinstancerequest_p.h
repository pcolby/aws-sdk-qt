// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMPRODUCTINSTANCEREQUEST_P_H
#define QTAWS_CONFIRMPRODUCTINSTANCEREQUEST_P_H

#include "ec2request_p.h"
#include "confirmproductinstancerequest.h"

namespace QtAws {
namespace Ec2 {

class ConfirmProductInstanceRequest;

class ConfirmProductInstanceRequestPrivate : public Ec2RequestPrivate {

public:
    ConfirmProductInstanceRequestPrivate(const Ec2Request::Action action,
                                   ConfirmProductInstanceRequest * const q);
    ConfirmProductInstanceRequestPrivate(const ConfirmProductInstanceRequestPrivate &other,
                                   ConfirmProductInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfirmProductInstanceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

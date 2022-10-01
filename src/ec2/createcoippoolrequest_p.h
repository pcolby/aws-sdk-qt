// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOIPPOOLREQUEST_P_H
#define QTAWS_CREATECOIPPOOLREQUEST_P_H

#include "ec2request_p.h"
#include "createcoippoolrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateCoipPoolRequest;

class CreateCoipPoolRequestPrivate : public Ec2RequestPrivate {

public:
    CreateCoipPoolRequestPrivate(const Ec2Request::Action action,
                                   CreateCoipPoolRequest * const q);
    CreateCoipPoolRequestPrivate(const CreateCoipPoolRequestPrivate &other,
                                   CreateCoipPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCoipPoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

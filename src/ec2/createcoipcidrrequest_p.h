// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOIPCIDRREQUEST_P_H
#define QTAWS_CREATECOIPCIDRREQUEST_P_H

#include "ec2request_p.h"
#include "createcoipcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateCoipCidrRequest;

class CreateCoipCidrRequestPrivate : public Ec2RequestPrivate {

public:
    CreateCoipCidrRequestPrivate(const Ec2Request::Action action,
                                   CreateCoipCidrRequest * const q);
    CreateCoipCidrRequestPrivate(const CreateCoipCidrRequestPrivate &other,
                                   CreateCoipCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCoipCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

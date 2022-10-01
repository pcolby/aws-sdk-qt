// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEIAMINSTANCEPROFILEREQUEST_P_H
#define QTAWS_ASSOCIATEIAMINSTANCEPROFILEREQUEST_P_H

#include "ec2request_p.h"
#include "associateiaminstanceprofilerequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateIamInstanceProfileRequest;

class AssociateIamInstanceProfileRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateIamInstanceProfileRequestPrivate(const Ec2Request::Action action,
                                   AssociateIamInstanceProfileRequest * const q);
    AssociateIamInstanceProfileRequestPrivate(const AssociateIamInstanceProfileRequestPrivate &other,
                                   AssociateIamInstanceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateIamInstanceProfileRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

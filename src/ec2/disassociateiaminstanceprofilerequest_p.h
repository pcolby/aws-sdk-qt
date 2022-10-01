// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEIAMINSTANCEPROFILEREQUEST_P_H
#define QTAWS_DISASSOCIATEIAMINSTANCEPROFILEREQUEST_P_H

#include "ec2request_p.h"
#include "disassociateiaminstanceprofilerequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateIamInstanceProfileRequest;

class DisassociateIamInstanceProfileRequestPrivate : public Ec2RequestPrivate {

public:
    DisassociateIamInstanceProfileRequestPrivate(const Ec2Request::Action action,
                                   DisassociateIamInstanceProfileRequest * const q);
    DisassociateIamInstanceProfileRequestPrivate(const DisassociateIamInstanceProfileRequestPrivate &other,
                                   DisassociateIamInstanceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateIamInstanceProfileRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

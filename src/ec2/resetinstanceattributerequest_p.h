// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETINSTANCEATTRIBUTEREQUEST_P_H
#define QTAWS_RESETINSTANCEATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "resetinstanceattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ResetInstanceAttributeRequest;

class ResetInstanceAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    ResetInstanceAttributeRequestPrivate(const Ec2Request::Action action,
                                   ResetInstanceAttributeRequest * const q);
    ResetInstanceAttributeRequestPrivate(const ResetInstanceAttributeRequestPrivate &other,
                                   ResetInstanceAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetInstanceAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

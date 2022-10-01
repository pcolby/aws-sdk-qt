// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETEBSDEFAULTKMSKEYIDREQUEST_P_H
#define QTAWS_RESETEBSDEFAULTKMSKEYIDREQUEST_P_H

#include "ec2request_p.h"
#include "resetebsdefaultkmskeyidrequest.h"

namespace QtAws {
namespace Ec2 {

class ResetEbsDefaultKmsKeyIdRequest;

class ResetEbsDefaultKmsKeyIdRequestPrivate : public Ec2RequestPrivate {

public:
    ResetEbsDefaultKmsKeyIdRequestPrivate(const Ec2Request::Action action,
                                   ResetEbsDefaultKmsKeyIdRequest * const q);
    ResetEbsDefaultKmsKeyIdRequestPrivate(const ResetEbsDefaultKmsKeyIdRequestPrivate &other,
                                   ResetEbsDefaultKmsKeyIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetEbsDefaultKmsKeyIdRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

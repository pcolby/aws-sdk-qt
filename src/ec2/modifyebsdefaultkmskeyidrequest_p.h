// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYEBSDEFAULTKMSKEYIDREQUEST_P_H
#define QTAWS_MODIFYEBSDEFAULTKMSKEYIDREQUEST_P_H

#include "ec2request_p.h"
#include "modifyebsdefaultkmskeyidrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyEbsDefaultKmsKeyIdRequest;

class ModifyEbsDefaultKmsKeyIdRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyEbsDefaultKmsKeyIdRequestPrivate(const Ec2Request::Action action,
                                   ModifyEbsDefaultKmsKeyIdRequest * const q);
    ModifyEbsDefaultKmsKeyIdRequestPrivate(const ModifyEbsDefaultKmsKeyIdRequestPrivate &other,
                                   ModifyEbsDefaultKmsKeyIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyEbsDefaultKmsKeyIdRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

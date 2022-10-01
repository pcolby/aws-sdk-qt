// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEBSDEFAULTKMSKEYIDREQUEST_P_H
#define QTAWS_GETEBSDEFAULTKMSKEYIDREQUEST_P_H

#include "ec2request_p.h"
#include "getebsdefaultkmskeyidrequest.h"

namespace QtAws {
namespace Ec2 {

class GetEbsDefaultKmsKeyIdRequest;

class GetEbsDefaultKmsKeyIdRequestPrivate : public Ec2RequestPrivate {

public:
    GetEbsDefaultKmsKeyIdRequestPrivate(const Ec2Request::Action action,
                                   GetEbsDefaultKmsKeyIdRequest * const q);
    GetEbsDefaultKmsKeyIdRequestPrivate(const GetEbsDefaultKmsKeyIdRequestPrivate &other,
                                   GetEbsDefaultKmsKeyIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEbsDefaultKmsKeyIdRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEBSENCRYPTIONBYDEFAULTREQUEST_P_H
#define QTAWS_GETEBSENCRYPTIONBYDEFAULTREQUEST_P_H

#include "ec2request_p.h"
#include "getebsencryptionbydefaultrequest.h"

namespace QtAws {
namespace Ec2 {

class GetEbsEncryptionByDefaultRequest;

class GetEbsEncryptionByDefaultRequestPrivate : public Ec2RequestPrivate {

public:
    GetEbsEncryptionByDefaultRequestPrivate(const Ec2Request::Action action,
                                   GetEbsEncryptionByDefaultRequest * const q);
    GetEbsEncryptionByDefaultRequestPrivate(const GetEbsEncryptionByDefaultRequestPrivate &other,
                                   GetEbsEncryptionByDefaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEbsEncryptionByDefaultRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

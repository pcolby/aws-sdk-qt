// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEEBSENCRYPTIONBYDEFAULTREQUEST_P_H
#define QTAWS_ENABLEEBSENCRYPTIONBYDEFAULTREQUEST_P_H

#include "ec2request_p.h"
#include "enableebsencryptionbydefaultrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableEbsEncryptionByDefaultRequest;

class EnableEbsEncryptionByDefaultRequestPrivate : public Ec2RequestPrivate {

public:
    EnableEbsEncryptionByDefaultRequestPrivate(const Ec2Request::Action action,
                                   EnableEbsEncryptionByDefaultRequest * const q);
    EnableEbsEncryptionByDefaultRequestPrivate(const EnableEbsEncryptionByDefaultRequestPrivate &other,
                                   EnableEbsEncryptionByDefaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableEbsEncryptionByDefaultRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

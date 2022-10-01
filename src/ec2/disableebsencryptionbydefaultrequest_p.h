// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEEBSENCRYPTIONBYDEFAULTREQUEST_P_H
#define QTAWS_DISABLEEBSENCRYPTIONBYDEFAULTREQUEST_P_H

#include "ec2request_p.h"
#include "disableebsencryptionbydefaultrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableEbsEncryptionByDefaultRequest;

class DisableEbsEncryptionByDefaultRequestPrivate : public Ec2RequestPrivate {

public:
    DisableEbsEncryptionByDefaultRequestPrivate(const Ec2Request::Action action,
                                   DisableEbsEncryptionByDefaultRequest * const q);
    DisableEbsEncryptionByDefaultRequestPrivate(const DisableEbsEncryptionByDefaultRequestPrivate &other,
                                   DisableEbsEncryptionByDefaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableEbsEncryptionByDefaultRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

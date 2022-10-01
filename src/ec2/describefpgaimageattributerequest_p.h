// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFPGAIMAGEATTRIBUTEREQUEST_P_H
#define QTAWS_DESCRIBEFPGAIMAGEATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "describefpgaimageattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeFpgaImageAttributeRequest;

class DescribeFpgaImageAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeFpgaImageAttributeRequestPrivate(const Ec2Request::Action action,
                                   DescribeFpgaImageAttributeRequest * const q);
    DescribeFpgaImageAttributeRequestPrivate(const DescribeFpgaImageAttributeRequestPrivate &other,
                                   DescribeFpgaImageAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFpgaImageAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

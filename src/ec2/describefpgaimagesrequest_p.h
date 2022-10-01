// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFPGAIMAGESREQUEST_P_H
#define QTAWS_DESCRIBEFPGAIMAGESREQUEST_P_H

#include "ec2request_p.h"
#include "describefpgaimagesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeFpgaImagesRequest;

class DescribeFpgaImagesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeFpgaImagesRequestPrivate(const Ec2Request::Action action,
                                   DescribeFpgaImagesRequest * const q);
    DescribeFpgaImagesRequestPrivate(const DescribeFpgaImagesRequestPrivate &other,
                                   DescribeFpgaImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFpgaImagesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

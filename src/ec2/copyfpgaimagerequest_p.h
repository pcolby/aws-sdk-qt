// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYFPGAIMAGEREQUEST_P_H
#define QTAWS_COPYFPGAIMAGEREQUEST_P_H

#include "ec2request_p.h"
#include "copyfpgaimagerequest.h"

namespace QtAws {
namespace Ec2 {

class CopyFpgaImageRequest;

class CopyFpgaImageRequestPrivate : public Ec2RequestPrivate {

public:
    CopyFpgaImageRequestPrivate(const Ec2Request::Action action,
                                   CopyFpgaImageRequest * const q);
    CopyFpgaImageRequestPrivate(const CopyFpgaImageRequestPrivate &other,
                                   CopyFpgaImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyFpgaImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

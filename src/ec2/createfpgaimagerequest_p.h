// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFPGAIMAGEREQUEST_P_H
#define QTAWS_CREATEFPGAIMAGEREQUEST_P_H

#include "ec2request_p.h"
#include "createfpgaimagerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateFpgaImageRequest;

class CreateFpgaImageRequestPrivate : public Ec2RequestPrivate {

public:
    CreateFpgaImageRequestPrivate(const Ec2Request::Action action,
                                   CreateFpgaImageRequest * const q);
    CreateFpgaImageRequestPrivate(const CreateFpgaImageRequestPrivate &other,
                                   CreateFpgaImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFpgaImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFPGAIMAGEREQUEST_P_H
#define QTAWS_DELETEFPGAIMAGEREQUEST_P_H

#include "ec2request_p.h"
#include "deletefpgaimagerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteFpgaImageRequest;

class DeleteFpgaImageRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteFpgaImageRequestPrivate(const Ec2Request::Action action,
                                   DeleteFpgaImageRequest * const q);
    DeleteFpgaImageRequestPrivate(const DeleteFpgaImageRequestPrivate &other,
                                   DeleteFpgaImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFpgaImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

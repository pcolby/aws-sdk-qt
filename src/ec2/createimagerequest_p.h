// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEREQUEST_P_H
#define QTAWS_CREATEIMAGEREQUEST_P_H

#include "ec2request_p.h"
#include "createimagerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateImageRequest;

class CreateImageRequestPrivate : public Ec2RequestPrivate {

public:
    CreateImageRequestPrivate(const Ec2Request::Action action,
                                   CreateImageRequest * const q);
    CreateImageRequestPrivate(const CreateImageRequestPrivate &other,
                                   CreateImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

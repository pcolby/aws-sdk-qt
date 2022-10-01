// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTOREIMAGETASKREQUEST_P_H
#define QTAWS_CREATESTOREIMAGETASKREQUEST_P_H

#include "ec2request_p.h"
#include "createstoreimagetaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateStoreImageTaskRequest;

class CreateStoreImageTaskRequestPrivate : public Ec2RequestPrivate {

public:
    CreateStoreImageTaskRequestPrivate(const Ec2Request::Action action,
                                   CreateStoreImageTaskRequest * const q);
    CreateStoreImageTaskRequestPrivate(const CreateStoreImageTaskRequestPrivate &other,
                                   CreateStoreImageTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStoreImageTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

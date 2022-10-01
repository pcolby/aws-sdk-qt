// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESTOREIMAGETASKREQUEST_P_H
#define QTAWS_CREATERESTOREIMAGETASKREQUEST_P_H

#include "ec2request_p.h"
#include "createrestoreimagetaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateRestoreImageTaskRequest;

class CreateRestoreImageTaskRequestPrivate : public Ec2RequestPrivate {

public:
    CreateRestoreImageTaskRequestPrivate(const Ec2Request::Action action,
                                   CreateRestoreImageTaskRequest * const q);
    CreateRestoreImageTaskRequestPrivate(const CreateRestoreImageTaskRequestPrivate &other,
                                   CreateRestoreImageTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRestoreImageTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

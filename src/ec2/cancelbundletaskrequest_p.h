// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBUNDLETASKREQUEST_P_H
#define QTAWS_CANCELBUNDLETASKREQUEST_P_H

#include "ec2request_p.h"
#include "cancelbundletaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelBundleTaskRequest;

class CancelBundleTaskRequestPrivate : public Ec2RequestPrivate {

public:
    CancelBundleTaskRequestPrivate(const Ec2Request::Action action,
                                   CancelBundleTaskRequest * const q);
    CancelBundleTaskRequestPrivate(const CancelBundleTaskRequestPrivate &other,
                                   CancelBundleTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelBundleTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

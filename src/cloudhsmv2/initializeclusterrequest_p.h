// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIALIZECLUSTERREQUEST_P_H
#define QTAWS_INITIALIZECLUSTERREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "initializeclusterrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class InitializeClusterRequest;

class InitializeClusterRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    InitializeClusterRequestPrivate(const CloudHsmV2Request::Action action,
                                   InitializeClusterRequest * const q);
    InitializeClusterRequestPrivate(const InitializeClusterRequestPrivate &other,
                                   InitializeClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(InitializeClusterRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif

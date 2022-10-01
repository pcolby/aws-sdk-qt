// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERREQUEST_P_H
#define QTAWS_CREATECLUSTERREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "createclusterrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class CreateClusterRequest;

class CreateClusterRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    CreateClusterRequestPrivate(const CloudHsmV2Request::Action action,
                                   CreateClusterRequest * const q);
    CreateClusterRequestPrivate(const CreateClusterRequestPrivate &other,
                                   CreateClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateClusterRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif

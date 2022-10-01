// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERREQUEST_P_H
#define QTAWS_DELETECLUSTERREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "deleteclusterrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class DeleteClusterRequest;

class DeleteClusterRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    DeleteClusterRequestPrivate(const CloudHsmV2Request::Action action,
                                   DeleteClusterRequest * const q);
    DeleteClusterRequestPrivate(const DeleteClusterRequestPrivate &other,
                                   DeleteClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteClusterRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif

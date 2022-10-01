// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTPOLICYREQUEST_P_H
#define QTAWS_DELETEACCESSPOINTPOLICYREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deleteaccesspointpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointPolicyRequest;

class DeleteAccessPointPolicyRequestPrivate : public S3ControlRequestPrivate {

public:
    DeleteAccessPointPolicyRequestPrivate(const S3ControlRequest::Action action,
                                   DeleteAccessPointPolicyRequest * const q);
    DeleteAccessPointPolicyRequestPrivate(const DeleteAccessPointPolicyRequestPrivate &other,
                                   DeleteAccessPointPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccessPointPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

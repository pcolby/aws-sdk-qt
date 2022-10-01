// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYREQUEST_P_H
#define QTAWS_GETACCESSPOINTPOLICYREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getaccesspointpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyRequest;

class GetAccessPointPolicyRequestPrivate : public S3ControlRequestPrivate {

public:
    GetAccessPointPolicyRequestPrivate(const S3ControlRequest::Action action,
                                   GetAccessPointPolicyRequest * const q);
    GetAccessPointPolicyRequestPrivate(const GetAccessPointPolicyRequestPrivate &other,
                                   GetAccessPointPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccessPointPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

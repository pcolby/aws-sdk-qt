// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYSTATUSREQUEST_P_H
#define QTAWS_GETACCESSPOINTPOLICYSTATUSREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getaccesspointpolicystatusrequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyStatusRequest;

class GetAccessPointPolicyStatusRequestPrivate : public S3ControlRequestPrivate {

public:
    GetAccessPointPolicyStatusRequestPrivate(const S3ControlRequest::Action action,
                                   GetAccessPointPolicyStatusRequest * const q);
    GetAccessPointPolicyStatusRequestPrivate(const GetAccessPointPolicyStatusRequestPrivate &other,
                                   GetAccessPointPolicyStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccessPointPolicyStatusRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

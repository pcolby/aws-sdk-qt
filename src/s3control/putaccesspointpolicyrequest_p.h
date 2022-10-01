// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSPOINTPOLICYREQUEST_P_H
#define QTAWS_PUTACCESSPOINTPOLICYREQUEST_P_H

#include "s3controlrequest_p.h"
#include "putaccesspointpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class PutAccessPointPolicyRequest;

class PutAccessPointPolicyRequestPrivate : public S3ControlRequestPrivate {

public:
    PutAccessPointPolicyRequestPrivate(const S3ControlRequest::Action action,
                                   PutAccessPointPolicyRequest * const q);
    PutAccessPointPolicyRequestPrivate(const PutAccessPointPolicyRequestPrivate &other,
                                   PutAccessPointPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccessPointPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

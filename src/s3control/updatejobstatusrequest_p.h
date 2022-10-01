// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBSTATUSREQUEST_P_H
#define QTAWS_UPDATEJOBSTATUSREQUEST_P_H

#include "s3controlrequest_p.h"
#include "updatejobstatusrequest.h"

namespace QtAws {
namespace S3Control {

class UpdateJobStatusRequest;

class UpdateJobStatusRequestPrivate : public S3ControlRequestPrivate {

public:
    UpdateJobStatusRequestPrivate(const S3ControlRequest::Action action,
                                   UpdateJobStatusRequest * const q);
    UpdateJobStatusRequestPrivate(const UpdateJobStatusRequestPrivate &other,
                                   UpdateJobStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateJobStatusRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

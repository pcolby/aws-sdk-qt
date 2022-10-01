// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBPRIORITYREQUEST_P_H
#define QTAWS_UPDATEJOBPRIORITYREQUEST_P_H

#include "s3controlrequest_p.h"
#include "updatejobpriorityrequest.h"

namespace QtAws {
namespace S3Control {

class UpdateJobPriorityRequest;

class UpdateJobPriorityRequestPrivate : public S3ControlRequestPrivate {

public:
    UpdateJobPriorityRequestPrivate(const S3ControlRequest::Action action,
                                   UpdateJobPriorityRequest * const q);
    UpdateJobPriorityRequestPrivate(const UpdateJobPriorityRequestPrivate &other,
                                   UpdateJobPriorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateJobPriorityRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBTAGGINGREQUEST_P_H
#define QTAWS_DELETEJOBTAGGINGREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deletejobtaggingrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteJobTaggingRequest;

class DeleteJobTaggingRequestPrivate : public S3ControlRequestPrivate {

public:
    DeleteJobTaggingRequestPrivate(const S3ControlRequest::Action action,
                                   DeleteJobTaggingRequest * const q);
    DeleteJobTaggingRequestPrivate(const DeleteJobTaggingRequestPrivate &other,
                                   DeleteJobTaggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteJobTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

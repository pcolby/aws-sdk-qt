// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBTAGGINGREQUEST_P_H
#define QTAWS_GETJOBTAGGINGREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getjobtaggingrequest.h"

namespace QtAws {
namespace S3Control {

class GetJobTaggingRequest;

class GetJobTaggingRequestPrivate : public S3ControlRequestPrivate {

public:
    GetJobTaggingRequestPrivate(const S3ControlRequest::Action action,
                                   GetJobTaggingRequest * const q);
    GetJobTaggingRequestPrivate(const GetJobTaggingRequestPrivate &other,
                                   GetJobTaggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

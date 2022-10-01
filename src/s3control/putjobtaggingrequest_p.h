// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTJOBTAGGINGREQUEST_P_H
#define QTAWS_PUTJOBTAGGINGREQUEST_P_H

#include "s3controlrequest_p.h"
#include "putjobtaggingrequest.h"

namespace QtAws {
namespace S3Control {

class PutJobTaggingRequest;

class PutJobTaggingRequestPrivate : public S3ControlRequestPrivate {

public:
    PutJobTaggingRequestPrivate(const S3ControlRequest::Action action,
                                   PutJobTaggingRequest * const q);
    PutJobTaggingRequestPrivate(const PutJobTaggingRequestPrivate &other,
                                   PutJobTaggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutJobTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

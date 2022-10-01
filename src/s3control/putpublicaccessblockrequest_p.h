// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPUBLICACCESSBLOCKREQUEST_P_H
#define QTAWS_PUTPUBLICACCESSBLOCKREQUEST_P_H

#include "s3controlrequest_p.h"
#include "putpublicaccessblockrequest.h"

namespace QtAws {
namespace S3Control {

class PutPublicAccessBlockRequest;

class PutPublicAccessBlockRequestPrivate : public S3ControlRequestPrivate {

public:
    PutPublicAccessBlockRequestPrivate(const S3ControlRequest::Action action,
                                   PutPublicAccessBlockRequest * const q);
    PutPublicAccessBlockRequestPrivate(const PutPublicAccessBlockRequestPrivate &other,
                                   PutPublicAccessBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPublicAccessBlockRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

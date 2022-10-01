// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLICACCESSBLOCKREQUEST_P_H
#define QTAWS_DELETEPUBLICACCESSBLOCKREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deletepublicaccessblockrequest.h"

namespace QtAws {
namespace S3Control {

class DeletePublicAccessBlockRequest;

class DeletePublicAccessBlockRequestPrivate : public S3ControlRequestPrivate {

public:
    DeletePublicAccessBlockRequestPrivate(const S3ControlRequest::Action action,
                                   DeletePublicAccessBlockRequest * const q);
    DeletePublicAccessBlockRequestPrivate(const DeletePublicAccessBlockRequestPrivate &other,
                                   DeletePublicAccessBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePublicAccessBlockRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

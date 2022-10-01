// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTREQUEST_P_H
#define QTAWS_DELETEACCESSPOINTREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deleteaccesspointrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointRequest;

class DeleteAccessPointRequestPrivate : public S3ControlRequestPrivate {

public:
    DeleteAccessPointRequestPrivate(const S3ControlRequest::Action action,
                                   DeleteAccessPointRequest * const q);
    DeleteAccessPointRequestPrivate(const DeleteAccessPointRequestPrivate &other,
                                   DeleteAccessPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccessPointRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

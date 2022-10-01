// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTREQUEST_P_H
#define QTAWS_DELETEENDPOINTREQUEST_P_H

#include "s3outpostsrequest_p.h"
#include "deleteendpointrequest.h"

namespace QtAws {
namespace S3Outposts {

class DeleteEndpointRequest;

class DeleteEndpointRequestPrivate : public S3OutpostsRequestPrivate {

public:
    DeleteEndpointRequestPrivate(const S3OutpostsRequest::Action action,
                                   DeleteEndpointRequest * const q);
    DeleteEndpointRequestPrivate(const DeleteEndpointRequestPrivate &other,
                                   DeleteEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointRequest)

};

} // namespace S3Outposts
} // namespace QtAws

#endif

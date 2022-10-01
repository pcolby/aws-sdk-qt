// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTIREGIONACCESSPOINTREQUEST_P_H
#define QTAWS_DELETEMULTIREGIONACCESSPOINTREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deletemultiregionaccesspointrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteMultiRegionAccessPointRequest;

class DeleteMultiRegionAccessPointRequestPrivate : public S3ControlRequestPrivate {

public:
    DeleteMultiRegionAccessPointRequestPrivate(const S3ControlRequest::Action action,
                                   DeleteMultiRegionAccessPointRequest * const q);
    DeleteMultiRegionAccessPointRequestPrivate(const DeleteMultiRegionAccessPointRequestPrivate &other,
                                   DeleteMultiRegionAccessPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMultiRegionAccessPointRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

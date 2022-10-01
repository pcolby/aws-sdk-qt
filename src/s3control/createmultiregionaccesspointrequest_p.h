// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIREGIONACCESSPOINTREQUEST_P_H
#define QTAWS_CREATEMULTIREGIONACCESSPOINTREQUEST_P_H

#include "s3controlrequest_p.h"
#include "createmultiregionaccesspointrequest.h"

namespace QtAws {
namespace S3Control {

class CreateMultiRegionAccessPointRequest;

class CreateMultiRegionAccessPointRequestPrivate : public S3ControlRequestPrivate {

public:
    CreateMultiRegionAccessPointRequestPrivate(const S3ControlRequest::Action action,
                                   CreateMultiRegionAccessPointRequest * const q);
    CreateMultiRegionAccessPointRequestPrivate(const CreateMultiRegionAccessPointRequestPrivate &other,
                                   CreateMultiRegionAccessPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMultiRegionAccessPointRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

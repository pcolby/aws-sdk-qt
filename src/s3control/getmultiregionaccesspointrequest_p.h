// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTIREGIONACCESSPOINTREQUEST_P_H
#define QTAWS_GETMULTIREGIONACCESSPOINTREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getmultiregionaccesspointrequest.h"

namespace QtAws {
namespace S3Control {

class GetMultiRegionAccessPointRequest;

class GetMultiRegionAccessPointRequestPrivate : public S3ControlRequestPrivate {

public:
    GetMultiRegionAccessPointRequestPrivate(const S3ControlRequest::Action action,
                                   GetMultiRegionAccessPointRequest * const q);
    GetMultiRegionAccessPointRequestPrivate(const GetMultiRegionAccessPointRequestPrivate &other,
                                   GetMultiRegionAccessPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMultiRegionAccessPointRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

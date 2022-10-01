// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIREGIONACCESSPOINTSREQUEST_P_H
#define QTAWS_LISTMULTIREGIONACCESSPOINTSREQUEST_P_H

#include "s3controlrequest_p.h"
#include "listmultiregionaccesspointsrequest.h"

namespace QtAws {
namespace S3Control {

class ListMultiRegionAccessPointsRequest;

class ListMultiRegionAccessPointsRequestPrivate : public S3ControlRequestPrivate {

public:
    ListMultiRegionAccessPointsRequestPrivate(const S3ControlRequest::Action action,
                                   ListMultiRegionAccessPointsRequest * const q);
    ListMultiRegionAccessPointsRequestPrivate(const ListMultiRegionAccessPointsRequestPrivate &other,
                                   ListMultiRegionAccessPointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMultiRegionAccessPointsRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

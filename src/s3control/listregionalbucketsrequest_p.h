// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGIONALBUCKETSREQUEST_P_H
#define QTAWS_LISTREGIONALBUCKETSREQUEST_P_H

#include "s3controlrequest_p.h"
#include "listregionalbucketsrequest.h"

namespace QtAws {
namespace S3Control {

class ListRegionalBucketsRequest;

class ListRegionalBucketsRequestPrivate : public S3ControlRequestPrivate {

public:
    ListRegionalBucketsRequestPrivate(const S3ControlRequest::Action action,
                                   ListRegionalBucketsRequest * const q);
    ListRegionalBucketsRequestPrivate(const ListRegionalBucketsRequestPrivate &other,
                                   ListRegionalBucketsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRegionalBucketsRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

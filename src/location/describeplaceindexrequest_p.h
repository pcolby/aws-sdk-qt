// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLACEINDEXREQUEST_P_H
#define QTAWS_DESCRIBEPLACEINDEXREQUEST_P_H

#include "locationrequest_p.h"
#include "describeplaceindexrequest.h"

namespace QtAws {
namespace Location {

class DescribePlaceIndexRequest;

class DescribePlaceIndexRequestPrivate : public LocationRequestPrivate {

public:
    DescribePlaceIndexRequestPrivate(const LocationRequest::Action action,
                                   DescribePlaceIndexRequest * const q);
    DescribePlaceIndexRequestPrivate(const DescribePlaceIndexRequestPrivate &other,
                                   DescribePlaceIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePlaceIndexRequest)

};

} // namespace Location
} // namespace QtAws

#endif

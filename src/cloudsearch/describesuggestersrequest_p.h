// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUGGESTERSREQUEST_P_H
#define QTAWS_DESCRIBESUGGESTERSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "describesuggestersrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeSuggestersRequest;

class DescribeSuggestersRequestPrivate : public CloudSearchRequestPrivate {

public:
    DescribeSuggestersRequestPrivate(const CloudSearchRequest::Action action,
                                   DescribeSuggestersRequest * const q);
    DescribeSuggestersRequestPrivate(const DescribeSuggestersRequestPrivate &other,
                                   DescribeSuggestersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSuggestersRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

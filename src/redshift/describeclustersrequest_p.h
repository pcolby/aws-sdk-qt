// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeclustersrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClustersRequest;

class DescribeClustersRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeClustersRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeClustersRequest * const q);
    DescribeClustersRequestPrivate(const DescribeClustersRequestPrivate &other,
                                   DescribeClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClustersRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

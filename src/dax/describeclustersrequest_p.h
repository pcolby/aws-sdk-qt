// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERSREQUEST_P_H

#include "daxrequest_p.h"
#include "describeclustersrequest.h"

namespace QtAws {
namespace Dax {

class DescribeClustersRequest;

class DescribeClustersRequestPrivate : public DaxRequestPrivate {

public:
    DescribeClustersRequestPrivate(const DaxRequest::Action action,
                                   DescribeClustersRequest * const q);
    DescribeClustersRequestPrivate(const DescribeClustersRequestPrivate &other,
                                   DescribeClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClustersRequest)

};

} // namespace Dax
} // namespace QtAws

#endif

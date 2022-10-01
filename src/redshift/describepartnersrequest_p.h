// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARTNERSREQUEST_P_H
#define QTAWS_DESCRIBEPARTNERSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describepartnersrequest.h"

namespace QtAws {
namespace Redshift {

class DescribePartnersRequest;

class DescribePartnersRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribePartnersRequestPrivate(const RedshiftRequest::Action action,
                                   DescribePartnersRequest * const q);
    DescribePartnersRequestPrivate(const DescribePartnersRequestPrivate &other,
                                   DescribePartnersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePartnersRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

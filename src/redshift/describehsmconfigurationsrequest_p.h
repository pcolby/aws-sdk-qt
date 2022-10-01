// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHSMCONFIGURATIONSREQUEST_P_H
#define QTAWS_DESCRIBEHSMCONFIGURATIONSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describehsmconfigurationsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeHsmConfigurationsRequest;

class DescribeHsmConfigurationsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeHsmConfigurationsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeHsmConfigurationsRequest * const q);
    DescribeHsmConfigurationsRequestPrivate(const DescribeHsmConfigurationsRequestPrivate &other,
                                   DescribeHsmConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHsmConfigurationsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

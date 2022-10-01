// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODECONFIGURATIONOPTIONSREQUEST_P_H
#define QTAWS_DESCRIBENODECONFIGURATIONOPTIONSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describenodeconfigurationoptionsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeNodeConfigurationOptionsRequest;

class DescribeNodeConfigurationOptionsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeNodeConfigurationOptionsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeNodeConfigurationOptionsRequest * const q);
    DescribeNodeConfigurationOptionsRequestPrivate(const DescribeNodeConfigurationOptionsRequestPrivate &other,
                                   DescribeNodeConfigurationOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNodeConfigurationOptionsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONSRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentManagedActionsResponse;

class DescribeEnvironmentManagedActionsResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DescribeEnvironmentManagedActionsResponsePrivate(DescribeEnvironmentManagedActionsResponse * const q);

    void parseDescribeEnvironmentManagedActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentManagedActionsResponse)
    Q_DISABLE_COPY(DescribeEnvironmentManagedActionsResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

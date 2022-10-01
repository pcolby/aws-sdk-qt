// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONHISTORYRESPONSE_P_H
#define QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONHISTORYRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentManagedActionHistoryResponse;

class DescribeEnvironmentManagedActionHistoryResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DescribeEnvironmentManagedActionHistoryResponsePrivate(DescribeEnvironmentManagedActionHistoryResponse * const q);

    void parseDescribeEnvironmentManagedActionHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentManagedActionHistoryResponse)
    Q_DISABLE_COPY(DescribeEnvironmentManagedActionHistoryResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONHISTORYREQUEST_H
#define QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONHISTORYREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentManagedActionHistoryRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeEnvironmentManagedActionHistoryRequest : public ElasticBeanstalkRequest {

public:
    DescribeEnvironmentManagedActionHistoryRequest(const DescribeEnvironmentManagedActionHistoryRequest &other);
    DescribeEnvironmentManagedActionHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentManagedActionHistoryRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

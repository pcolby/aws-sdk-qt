// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONSREQUEST_H
#define QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONSREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentManagedActionsRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeEnvironmentManagedActionsRequest : public ElasticBeanstalkRequest {

public:
    DescribeEnvironmentManagedActionsRequest(const DescribeEnvironmentManagedActionsRequest &other);
    DescribeEnvironmentManagedActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentManagedActionsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

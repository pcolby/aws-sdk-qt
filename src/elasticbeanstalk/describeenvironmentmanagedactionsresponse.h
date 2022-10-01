// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONSRESPONSE_H
#define QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeenvironmentmanagedactionsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentManagedActionsResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeEnvironmentManagedActionsResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DescribeEnvironmentManagedActionsResponse(const DescribeEnvironmentManagedActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEnvironmentManagedActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentManagedActionsResponse)
    Q_DISABLE_COPY(DescribeEnvironmentManagedActionsResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

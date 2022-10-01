// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTRESOURCESRESPONSE_H
#define QTAWS_DESCRIBEENVIRONMENTRESOURCESRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeenvironmentresourcesrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentResourcesResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeEnvironmentResourcesResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DescribeEnvironmentResourcesResponse(const DescribeEnvironmentResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEnvironmentResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentResourcesResponse)
    Q_DISABLE_COPY(DescribeEnvironmentResourcesResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

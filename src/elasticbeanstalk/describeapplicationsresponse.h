// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONSRESPONSE_H
#define QTAWS_DESCRIBEAPPLICATIONSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeapplicationsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeApplicationsResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeApplicationsResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DescribeApplicationsResponse(const DescribeApplicationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApplicationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationsResponse)
    Q_DISABLE_COPY(DescribeApplicationsResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

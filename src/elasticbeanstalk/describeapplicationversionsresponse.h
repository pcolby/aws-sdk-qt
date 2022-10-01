// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONVERSIONSRESPONSE_H
#define QTAWS_DESCRIBEAPPLICATIONVERSIONSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeapplicationversionsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeApplicationVersionsResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeApplicationVersionsResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DescribeApplicationVersionsResponse(const DescribeApplicationVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApplicationVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationVersionsResponse)
    Q_DISABLE_COPY(DescribeApplicationVersionsResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

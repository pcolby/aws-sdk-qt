// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESHEALTHRESPONSE_H
#define QTAWS_DESCRIBEINSTANCESHEALTHRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeinstanceshealthrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeInstancesHealthResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeInstancesHealthResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DescribeInstancesHealthResponse(const DescribeInstancesHealthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstancesHealthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstancesHealthResponse)
    Q_DISABLE_COPY(DescribeInstancesHealthResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

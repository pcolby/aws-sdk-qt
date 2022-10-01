// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTHEALTHRESPONSE_H
#define QTAWS_DESCRIBEENVIRONMENTHEALTHRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeenvironmenthealthrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentHealthResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeEnvironmentHealthResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DescribeEnvironmentHealthResponse(const DescribeEnvironmentHealthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEnvironmentHealthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentHealthResponse)
    Q_DISABLE_COPY(DescribeEnvironmentHealthResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

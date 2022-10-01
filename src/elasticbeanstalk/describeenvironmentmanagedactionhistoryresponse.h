// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONHISTORYRESPONSE_H
#define QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONHISTORYRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeenvironmentmanagedactionhistoryrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentManagedActionHistoryResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeEnvironmentManagedActionHistoryResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DescribeEnvironmentManagedActionHistoryResponse(const DescribeEnvironmentManagedActionHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEnvironmentManagedActionHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentManagedActionHistoryResponse)
    Q_DISABLE_COPY(DescribeEnvironmentManagedActionHistoryResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

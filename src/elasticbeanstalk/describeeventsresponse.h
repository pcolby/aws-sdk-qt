// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSRESPONSE_H
#define QTAWS_DESCRIBEEVENTSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeeventsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEventsResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeEventsResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DescribeEventsResponse(const DescribeEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventsResponse)
    Q_DISABLE_COPY(DescribeEventsResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

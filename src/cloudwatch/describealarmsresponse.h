// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMSRESPONSE_H
#define QTAWS_DESCRIBEALARMSRESPONSE_H

#include "cloudwatchresponse.h"
#include "describealarmsrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAlarmsResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT DescribeAlarmsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    DescribeAlarmsResponse(const DescribeAlarmsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAlarmsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlarmsResponse)
    Q_DISABLE_COPY(DescribeAlarmsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif

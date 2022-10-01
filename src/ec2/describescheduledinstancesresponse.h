// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDINSTANCESRESPONSE_H
#define QTAWS_DESCRIBESCHEDULEDINSTANCESRESPONSE_H

#include "ec2response.h"
#include "describescheduledinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeScheduledInstancesResponsePrivate;

class QTAWSEC2_EXPORT DescribeScheduledInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeScheduledInstancesResponse(const DescribeScheduledInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScheduledInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScheduledInstancesResponse)
    Q_DISABLE_COPY(DescribeScheduledInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif

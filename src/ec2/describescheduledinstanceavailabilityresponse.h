// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDINSTANCEAVAILABILITYRESPONSE_H
#define QTAWS_DESCRIBESCHEDULEDINSTANCEAVAILABILITYRESPONSE_H

#include "ec2response.h"
#include "describescheduledinstanceavailabilityrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeScheduledInstanceAvailabilityResponsePrivate;

class QTAWSEC2_EXPORT DescribeScheduledInstanceAvailabilityResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeScheduledInstanceAvailabilityResponse(const DescribeScheduledInstanceAvailabilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScheduledInstanceAvailabilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScheduledInstanceAvailabilityResponse)
    Q_DISABLE_COPY(DescribeScheduledInstanceAvailabilityResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif

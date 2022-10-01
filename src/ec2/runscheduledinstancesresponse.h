// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNSCHEDULEDINSTANCESRESPONSE_H
#define QTAWS_RUNSCHEDULEDINSTANCESRESPONSE_H

#include "ec2response.h"
#include "runscheduledinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class RunScheduledInstancesResponsePrivate;

class QTAWSEC2_EXPORT RunScheduledInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    RunScheduledInstancesResponse(const RunScheduledInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RunScheduledInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RunScheduledInstancesResponse)
    Q_DISABLE_COPY(RunScheduledInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYTESTREPORTREQUEST_P_H
#define QTAWS_GETDELIVERABILITYTESTREPORTREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "getdeliverabilitytestreportrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDeliverabilityTestReportRequest;

class GetDeliverabilityTestReportRequestPrivate : public PinpointEmailRequestPrivate {

public:
    GetDeliverabilityTestReportRequestPrivate(const PinpointEmailRequest::Action action,
                                   GetDeliverabilityTestReportRequest * const q);
    GetDeliverabilityTestReportRequestPrivate(const GetDeliverabilityTestReportRequestPrivate &other,
                                   GetDeliverabilityTestReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeliverabilityTestReportRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif

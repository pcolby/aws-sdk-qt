// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDELIVERABILITYTESTREPORTREQUEST_P_H
#define QTAWS_CREATEDELIVERABILITYTESTREPORTREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "createdeliverabilitytestreportrequest.h"

namespace QtAws {
namespace PinpointEmail {

class CreateDeliverabilityTestReportRequest;

class CreateDeliverabilityTestReportRequestPrivate : public PinpointEmailRequestPrivate {

public:
    CreateDeliverabilityTestReportRequestPrivate(const PinpointEmailRequest::Action action,
                                   CreateDeliverabilityTestReportRequest * const q);
    CreateDeliverabilityTestReportRequestPrivate(const CreateDeliverabilityTestReportRequestPrivate &other,
                                   CreateDeliverabilityTestReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeliverabilityTestReportRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif

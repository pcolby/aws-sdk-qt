// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDELIVERABILITYTESTREPORTREQUEST_P_H
#define QTAWS_CREATEDELIVERABILITYTESTREPORTREQUEST_P_H

#include "sesv2request_p.h"
#include "createdeliverabilitytestreportrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateDeliverabilityTestReportRequest;

class CreateDeliverabilityTestReportRequestPrivate : public SESv2RequestPrivate {

public:
    CreateDeliverabilityTestReportRequestPrivate(const SESv2Request::Action action,
                                   CreateDeliverabilityTestReportRequest * const q);
    CreateDeliverabilityTestReportRequestPrivate(const CreateDeliverabilityTestReportRequestPrivate &other,
                                   CreateDeliverabilityTestReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeliverabilityTestReportRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

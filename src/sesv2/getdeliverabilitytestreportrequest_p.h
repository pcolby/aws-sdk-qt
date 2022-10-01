// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYTESTREPORTREQUEST_P_H
#define QTAWS_GETDELIVERABILITYTESTREPORTREQUEST_P_H

#include "sesv2request_p.h"
#include "getdeliverabilitytestreportrequest.h"

namespace QtAws {
namespace SESv2 {

class GetDeliverabilityTestReportRequest;

class GetDeliverabilityTestReportRequestPrivate : public SESv2RequestPrivate {

public:
    GetDeliverabilityTestReportRequestPrivate(const SESv2Request::Action action,
                                   GetDeliverabilityTestReportRequest * const q);
    GetDeliverabilityTestReportRequestPrivate(const GetDeliverabilityTestReportRequestPrivate &other,
                                   GetDeliverabilityTestReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeliverabilityTestReportRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

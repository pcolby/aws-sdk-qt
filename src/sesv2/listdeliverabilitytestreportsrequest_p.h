// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELIVERABILITYTESTREPORTSREQUEST_P_H
#define QTAWS_LISTDELIVERABILITYTESTREPORTSREQUEST_P_H

#include "sesv2request_p.h"
#include "listdeliverabilitytestreportsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListDeliverabilityTestReportsRequest;

class ListDeliverabilityTestReportsRequestPrivate : public SESv2RequestPrivate {

public:
    ListDeliverabilityTestReportsRequestPrivate(const SESv2Request::Action action,
                                   ListDeliverabilityTestReportsRequest * const q);
    ListDeliverabilityTestReportsRequestPrivate(const ListDeliverabilityTestReportsRequestPrivate &other,
                                   ListDeliverabilityTestReportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeliverabilityTestReportsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

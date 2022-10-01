// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELIVERABILITYTESTREPORTSREQUEST_P_H
#define QTAWS_LISTDELIVERABILITYTESTREPORTSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "listdeliverabilitytestreportsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class ListDeliverabilityTestReportsRequest;

class ListDeliverabilityTestReportsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    ListDeliverabilityTestReportsRequestPrivate(const PinpointEmailRequest::Action action,
                                   ListDeliverabilityTestReportsRequest * const q);
    ListDeliverabilityTestReportsRequestPrivate(const ListDeliverabilityTestReportsRequestPrivate &other,
                                   ListDeliverabilityTestReportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeliverabilityTestReportsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPENGAGEMENTREQUEST_P_H
#define QTAWS_STOPENGAGEMENTREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "stopengagementrequest.h"

namespace QtAws {
namespace SsmContacts {

class StopEngagementRequest;

class StopEngagementRequestPrivate : public SsmContactsRequestPrivate {

public:
    StopEngagementRequestPrivate(const SsmContactsRequest::Action action,
                                   StopEngagementRequest * const q);
    StopEngagementRequestPrivate(const StopEngagementRequestPrivate &other,
                                   StopEngagementRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopEngagementRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

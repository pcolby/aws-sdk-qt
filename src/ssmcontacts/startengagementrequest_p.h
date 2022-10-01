// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTENGAGEMENTREQUEST_P_H
#define QTAWS_STARTENGAGEMENTREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "startengagementrequest.h"

namespace QtAws {
namespace SsmContacts {

class StartEngagementRequest;

class StartEngagementRequestPrivate : public SsmContactsRequestPrivate {

public:
    StartEngagementRequestPrivate(const SsmContactsRequest::Action action,
                                   StartEngagementRequest * const q);
    StartEngagementRequestPrivate(const StartEngagementRequestPrivate &other,
                                   StartEngagementRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartEngagementRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

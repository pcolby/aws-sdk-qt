// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPSITEMEVENTSREQUEST_P_H
#define QTAWS_LISTOPSITEMEVENTSREQUEST_P_H

#include "ssmrequest_p.h"
#include "listopsitemeventsrequest.h"

namespace QtAws {
namespace Ssm {

class ListOpsItemEventsRequest;

class ListOpsItemEventsRequestPrivate : public SsmRequestPrivate {

public:
    ListOpsItemEventsRequestPrivate(const SsmRequest::Action action,
                                   ListOpsItemEventsRequest * const q);
    ListOpsItemEventsRequestPrivate(const ListOpsItemEventsRequestPrivate &other,
                                   ListOpsItemEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOpsItemEventsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

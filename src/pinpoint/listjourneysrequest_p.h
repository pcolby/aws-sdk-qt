// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNEYSREQUEST_P_H
#define QTAWS_LISTJOURNEYSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "listjourneysrequest.h"

namespace QtAws {
namespace Pinpoint {

class ListJourneysRequest;

class ListJourneysRequestPrivate : public PinpointRequestPrivate {

public:
    ListJourneysRequestPrivate(const PinpointRequest::Action action,
                                   ListJourneysRequest * const q);
    ListJourneysRequestPrivate(const ListJourneysRequestPrivate &other,
                                   ListJourneysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJourneysRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

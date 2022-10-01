// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTENDEESREQUEST_P_H
#define QTAWS_LISTATTENDEESREQUEST_P_H

#include "chimerequest_p.h"
#include "listattendeesrequest.h"

namespace QtAws {
namespace Chime {

class ListAttendeesRequest;

class ListAttendeesRequestPrivate : public ChimeRequestPrivate {

public:
    ListAttendeesRequestPrivate(const ChimeRequest::Action action,
                                   ListAttendeesRequest * const q);
    ListAttendeesRequestPrivate(const ListAttendeesRequestPrivate &other,
                                   ListAttendeesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttendeesRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

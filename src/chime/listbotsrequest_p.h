// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTSREQUEST_P_H
#define QTAWS_LISTBOTSREQUEST_P_H

#include "chimerequest_p.h"
#include "listbotsrequest.h"

namespace QtAws {
namespace Chime {

class ListBotsRequest;

class ListBotsRequestPrivate : public ChimeRequestPrivate {

public:
    ListBotsRequestPrivate(const ChimeRequest::Action action,
                                   ListBotsRequest * const q);
    ListBotsRequestPrivate(const ListBotsRequestPrivate &other,
                                   ListBotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBotsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSISTANTSREQUEST_P_H
#define QTAWS_LISTASSISTANTSREQUEST_P_H

#include "wisdomrequest_p.h"
#include "listassistantsrequest.h"

namespace QtAws {
namespace Wisdom {

class ListAssistantsRequest;

class ListAssistantsRequestPrivate : public WisdomRequestPrivate {

public:
    ListAssistantsRequestPrivate(const WisdomRequest::Action action,
                                   ListAssistantsRequest * const q);
    ListAssistantsRequestPrivate(const ListAssistantsRequestPrivate &other,
                                   ListAssistantsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssistantsRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif

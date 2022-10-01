// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSISTANTREQUEST_P_H
#define QTAWS_GETASSISTANTREQUEST_P_H

#include "wisdomrequest_p.h"
#include "getassistantrequest.h"

namespace QtAws {
namespace Wisdom {

class GetAssistantRequest;

class GetAssistantRequestPrivate : public WisdomRequestPrivate {

public:
    GetAssistantRequestPrivate(const WisdomRequest::Action action,
                                   GetAssistantRequest * const q);
    GetAssistantRequestPrivate(const GetAssistantRequestPrivate &other,
                                   GetAssistantRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssistantRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif

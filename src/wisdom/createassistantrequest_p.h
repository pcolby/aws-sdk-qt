// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSISTANTREQUEST_P_H
#define QTAWS_CREATEASSISTANTREQUEST_P_H

#include "wisdomrequest_p.h"
#include "createassistantrequest.h"

namespace QtAws {
namespace Wisdom {

class CreateAssistantRequest;

class CreateAssistantRequestPrivate : public WisdomRequestPrivate {

public:
    CreateAssistantRequestPrivate(const WisdomRequest::Action action,
                                   CreateAssistantRequest * const q);
    CreateAssistantRequestPrivate(const CreateAssistantRequestPrivate &other,
                                   CreateAssistantRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAssistantRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif

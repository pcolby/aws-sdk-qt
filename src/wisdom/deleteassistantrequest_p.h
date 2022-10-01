// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSISTANTREQUEST_P_H
#define QTAWS_DELETEASSISTANTREQUEST_P_H

#include "wisdomrequest_p.h"
#include "deleteassistantrequest.h"

namespace QtAws {
namespace Wisdom {

class DeleteAssistantRequest;

class DeleteAssistantRequestPrivate : public WisdomRequestPrivate {

public:
    DeleteAssistantRequestPrivate(const WisdomRequest::Action action,
                                   DeleteAssistantRequest * const q);
    DeleteAssistantRequestPrivate(const DeleteAssistantRequestPrivate &other,
                                   DeleteAssistantRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAssistantRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTENTREQUEST_P_H
#define QTAWS_DELETECONTENTREQUEST_P_H

#include "wisdomrequest_p.h"
#include "deletecontentrequest.h"

namespace QtAws {
namespace Wisdom {

class DeleteContentRequest;

class DeleteContentRequestPrivate : public WisdomRequestPrivate {

public:
    DeleteContentRequestPrivate(const WisdomRequest::Action action,
                                   DeleteContentRequest * const q);
    DeleteContentRequestPrivate(const DeleteContentRequestPrivate &other,
                                   DeleteContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContentRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif

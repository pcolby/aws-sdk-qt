// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTENTREQUEST_P_H
#define QTAWS_CREATECONTENTREQUEST_P_H

#include "wisdomrequest_p.h"
#include "createcontentrequest.h"

namespace QtAws {
namespace Wisdom {

class CreateContentRequest;

class CreateContentRequestPrivate : public WisdomRequestPrivate {

public:
    CreateContentRequestPrivate(const WisdomRequest::Action action,
                                   CreateContentRequest * const q);
    CreateContentRequestPrivate(const CreateContentRequestPrivate &other,
                                   CreateContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContentRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif

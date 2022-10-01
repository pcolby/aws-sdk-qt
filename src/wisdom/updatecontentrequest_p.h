// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTENTREQUEST_P_H
#define QTAWS_UPDATECONTENTREQUEST_P_H

#include "wisdomrequest_p.h"
#include "updatecontentrequest.h"

namespace QtAws {
namespace Wisdom {

class UpdateContentRequest;

class UpdateContentRequestPrivate : public WisdomRequestPrivate {

public:
    UpdateContentRequestPrivate(const WisdomRequest::Action action,
                                   UpdateContentRequest * const q);
    UpdateContentRequestPrivate(const UpdateContentRequestPrivate &other,
                                   UpdateContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContentRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif

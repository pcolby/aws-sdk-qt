// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTENTREQUEST_P_H
#define QTAWS_GETCONTENTREQUEST_P_H

#include "wisdomrequest_p.h"
#include "getcontentrequest.h"

namespace QtAws {
namespace Wisdom {

class GetContentRequest;

class GetContentRequestPrivate : public WisdomRequestPrivate {

public:
    GetContentRequestPrivate(const WisdomRequest::Action action,
                                   GetContentRequest * const q);
    GetContentRequestPrivate(const GetContentRequestPrivate &other,
                                   GetContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContentRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSREQUEST_P_H
#define QTAWS_GETFINDINGSREQUEST_P_H

#include "macie2request_p.h"
#include "getfindingsrequest.h"

namespace QtAws {
namespace Macie2 {

class GetFindingsRequest;

class GetFindingsRequestPrivate : public Macie2RequestPrivate {

public:
    GetFindingsRequestPrivate(const Macie2Request::Action action,
                                   GetFindingsRequest * const q);
    GetFindingsRequestPrivate(const GetFindingsRequestPrivate &other,
                                   GetFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFindingsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

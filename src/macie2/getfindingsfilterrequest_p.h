// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSFILTERREQUEST_P_H
#define QTAWS_GETFINDINGSFILTERREQUEST_P_H

#include "macie2request_p.h"
#include "getfindingsfilterrequest.h"

namespace QtAws {
namespace Macie2 {

class GetFindingsFilterRequest;

class GetFindingsFilterRequestPrivate : public Macie2RequestPrivate {

public:
    GetFindingsFilterRequestPrivate(const Macie2Request::Action action,
                                   GetFindingsFilterRequest * const q);
    GetFindingsFilterRequestPrivate(const GetFindingsFilterRequestPrivate &other,
                                   GetFindingsFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFindingsFilterRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

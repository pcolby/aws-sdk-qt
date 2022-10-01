// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETALLOWLISTREQUEST_P_H
#define QTAWS_GETALLOWLISTREQUEST_P_H

#include "macie2request_p.h"
#include "getallowlistrequest.h"

namespace QtAws {
namespace Macie2 {

class GetAllowListRequest;

class GetAllowListRequestPrivate : public Macie2RequestPrivate {

public:
    GetAllowListRequestPrivate(const Macie2Request::Action action,
                                   GetAllowListRequest * const q);
    GetAllowListRequestPrivate(const GetAllowListRequestPrivate &other,
                                   GetAllowListRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAllowListRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALLOWLISTREQUEST_P_H
#define QTAWS_UPDATEALLOWLISTREQUEST_P_H

#include "macie2request_p.h"
#include "updateallowlistrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateAllowListRequest;

class UpdateAllowListRequestPrivate : public Macie2RequestPrivate {

public:
    UpdateAllowListRequestPrivate(const Macie2Request::Action action,
                                   UpdateAllowListRequest * const q);
    UpdateAllowListRequestPrivate(const UpdateAllowListRequestPrivate &other,
                                   UpdateAllowListRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAllowListRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

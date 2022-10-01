// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALLOWLISTREQUEST_P_H
#define QTAWS_CREATEALLOWLISTREQUEST_P_H

#include "macie2request_p.h"
#include "createallowlistrequest.h"

namespace QtAws {
namespace Macie2 {

class CreateAllowListRequest;

class CreateAllowListRequestPrivate : public Macie2RequestPrivate {

public:
    CreateAllowListRequestPrivate(const Macie2Request::Action action,
                                   CreateAllowListRequest * const q);
    CreateAllowListRequestPrivate(const CreateAllowListRequestPrivate &other,
                                   CreateAllowListRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAllowListRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

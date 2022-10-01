// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALLOWLISTREQUEST_P_H
#define QTAWS_DELETEALLOWLISTREQUEST_P_H

#include "macie2request_p.h"
#include "deleteallowlistrequest.h"

namespace QtAws {
namespace Macie2 {

class DeleteAllowListRequest;

class DeleteAllowListRequestPrivate : public Macie2RequestPrivate {

public:
    DeleteAllowListRequestPrivate(const Macie2Request::Action action,
                                   DeleteAllowListRequest * const q);
    DeleteAllowListRequestPrivate(const DeleteAllowListRequestPrivate &other,
                                   DeleteAllowListRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAllowListRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

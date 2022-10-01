// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGSFILTERREQUEST_P_H
#define QTAWS_UPDATEFINDINGSFILTERREQUEST_P_H

#include "macie2request_p.h"
#include "updatefindingsfilterrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateFindingsFilterRequest;

class UpdateFindingsFilterRequestPrivate : public Macie2RequestPrivate {

public:
    UpdateFindingsFilterRequestPrivate(const Macie2Request::Action action,
                                   UpdateFindingsFilterRequest * const q);
    UpdateFindingsFilterRequestPrivate(const UpdateFindingsFilterRequestPrivate &other,
                                   UpdateFindingsFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFindingsFilterRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFINDINGSFILTERREQUEST_P_H
#define QTAWS_DELETEFINDINGSFILTERREQUEST_P_H

#include "macie2request_p.h"
#include "deletefindingsfilterrequest.h"

namespace QtAws {
namespace Macie2 {

class DeleteFindingsFilterRequest;

class DeleteFindingsFilterRequestPrivate : public Macie2RequestPrivate {

public:
    DeleteFindingsFilterRequestPrivate(const Macie2Request::Action action,
                                   DeleteFindingsFilterRequest * const q);
    DeleteFindingsFilterRequestPrivate(const DeleteFindingsFilterRequestPrivate &other,
                                   DeleteFindingsFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFindingsFilterRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFINDINGSFILTERREQUEST_P_H
#define QTAWS_CREATEFINDINGSFILTERREQUEST_P_H

#include "macie2request_p.h"
#include "createfindingsfilterrequest.h"

namespace QtAws {
namespace Macie2 {

class CreateFindingsFilterRequest;

class CreateFindingsFilterRequestPrivate : public Macie2RequestPrivate {

public:
    CreateFindingsFilterRequestPrivate(const Macie2Request::Action action,
                                   CreateFindingsFilterRequest * const q);
    CreateFindingsFilterRequestPrivate(const CreateFindingsFilterRequestPrivate &other,
                                   CreateFindingsFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFindingsFilterRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

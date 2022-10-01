// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANSWERSREQUEST_P_H
#define QTAWS_LISTANSWERSREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "listanswersrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListAnswersRequest;

class ListAnswersRequestPrivate : public WellArchitectedRequestPrivate {

public:
    ListAnswersRequestPrivate(const WellArchitectedRequest::Action action,
                                   ListAnswersRequest * const q);
    ListAnswersRequestPrivate(const ListAnswersRequestPrivate &other,
                                   ListAnswersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAnswersRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

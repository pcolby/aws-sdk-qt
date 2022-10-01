// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITYRECOGNIZERSREQUEST_P_H
#define QTAWS_LISTENTITYRECOGNIZERSREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listentityrecognizersrequest.h"

namespace QtAws {
namespace Comprehend {

class ListEntityRecognizersRequest;

class ListEntityRecognizersRequestPrivate : public ComprehendRequestPrivate {

public:
    ListEntityRecognizersRequestPrivate(const ComprehendRequest::Action action,
                                   ListEntityRecognizersRequest * const q);
    ListEntityRecognizersRequestPrivate(const ListEntityRecognizersRequestPrivate &other,
                                   ListEntityRecognizersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEntityRecognizersRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

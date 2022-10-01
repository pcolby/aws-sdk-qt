// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITYRECOGNIZERSUMMARIESREQUEST_P_H
#define QTAWS_LISTENTITYRECOGNIZERSUMMARIESREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listentityrecognizersummariesrequest.h"

namespace QtAws {
namespace Comprehend {

class ListEntityRecognizerSummariesRequest;

class ListEntityRecognizerSummariesRequestPrivate : public ComprehendRequestPrivate {

public:
    ListEntityRecognizerSummariesRequestPrivate(const ComprehendRequest::Action action,
                                   ListEntityRecognizerSummariesRequest * const q);
    ListEntityRecognizerSummariesRequestPrivate(const ListEntityRecognizerSummariesRequestPrivate &other,
                                   ListEntityRecognizerSummariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEntityRecognizerSummariesRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

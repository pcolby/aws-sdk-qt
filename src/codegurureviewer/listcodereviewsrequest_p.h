// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCODEREVIEWSREQUEST_P_H
#define QTAWS_LISTCODEREVIEWSREQUEST_P_H

#include "codegurureviewerrequest_p.h"
#include "listcodereviewsrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListCodeReviewsRequest;

class ListCodeReviewsRequestPrivate : public CodeGuruReviewerRequestPrivate {

public:
    ListCodeReviewsRequestPrivate(const CodeGuruReviewerRequest::Action action,
                                   ListCodeReviewsRequest * const q);
    ListCodeReviewsRequestPrivate(const ListCodeReviewsRequestPrivate &other,
                                   ListCodeReviewsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCodeReviewsRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECODEREVIEWREQUEST_P_H
#define QTAWS_CREATECODEREVIEWREQUEST_P_H

#include "codegurureviewerrequest_p.h"
#include "createcodereviewrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class CreateCodeReviewRequest;

class CreateCodeReviewRequestPrivate : public CodeGuruReviewerRequestPrivate {

public:
    CreateCodeReviewRequestPrivate(const CodeGuruReviewerRequest::Action action,
                                   CreateCodeReviewRequest * const q);
    CreateCodeReviewRequestPrivate(const CreateCodeReviewRequestPrivate &other,
                                   CreateCodeReviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCodeReviewRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

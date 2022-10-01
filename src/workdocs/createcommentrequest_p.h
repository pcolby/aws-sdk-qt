// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMMENTREQUEST_P_H
#define QTAWS_CREATECOMMENTREQUEST_P_H

#include "workdocsrequest_p.h"
#include "createcommentrequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateCommentRequest;

class CreateCommentRequestPrivate : public WorkDocsRequestPrivate {

public:
    CreateCommentRequestPrivate(const WorkDocsRequest::Action action,
                                   CreateCommentRequest * const q);
    CreateCommentRequestPrivate(const CreateCommentRequestPrivate &other,
                                   CreateCommentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCommentRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif

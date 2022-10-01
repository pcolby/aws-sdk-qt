// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCOMMENTREPLYREQUEST_H
#define QTAWS_POSTCOMMENTREPLYREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class PostCommentReplyRequestPrivate;

class QTAWSCODECOMMIT_EXPORT PostCommentReplyRequest : public CodeCommitRequest {

public:
    PostCommentReplyRequest(const PostCommentReplyRequest &other);
    PostCommentReplyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostCommentReplyRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

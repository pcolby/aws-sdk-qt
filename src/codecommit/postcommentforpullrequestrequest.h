// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCOMMENTFORPULLREQUESTREQUEST_H
#define QTAWS_POSTCOMMENTFORPULLREQUESTREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class PostCommentForPullRequestRequestPrivate;

class QTAWSCODECOMMIT_EXPORT PostCommentForPullRequestRequest : public CodeCommitRequest {

public:
    PostCommentForPullRequestRequest(const PostCommentForPullRequestRequest &other);
    PostCommentForPullRequestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostCommentForPullRequestRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCOMMENTFORCOMPAREDCOMMITREQUEST_H
#define QTAWS_POSTCOMMENTFORCOMPAREDCOMMITREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class PostCommentForComparedCommitRequestPrivate;

class QTAWSCODECOMMIT_EXPORT PostCommentForComparedCommitRequest : public CodeCommitRequest {

public:
    PostCommentForComparedCommitRequest(const PostCommentForComparedCommitRequest &other);
    PostCommentForComparedCommitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostCommentForComparedCommitRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

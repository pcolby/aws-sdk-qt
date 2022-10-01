// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCOMMENTFORCOMPAREDCOMMITRESPONSE_H
#define QTAWS_POSTCOMMENTFORCOMPAREDCOMMITRESPONSE_H

#include "codecommitresponse.h"
#include "postcommentforcomparedcommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class PostCommentForComparedCommitResponsePrivate;

class QTAWSCODECOMMIT_EXPORT PostCommentForComparedCommitResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    PostCommentForComparedCommitResponse(const PostCommentForComparedCommitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PostCommentForComparedCommitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostCommentForComparedCommitResponse)
    Q_DISABLE_COPY(PostCommentForComparedCommitResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

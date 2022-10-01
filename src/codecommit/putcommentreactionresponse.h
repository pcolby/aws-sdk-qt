// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMMENTREACTIONRESPONSE_H
#define QTAWS_PUTCOMMENTREACTIONRESPONSE_H

#include "codecommitresponse.h"
#include "putcommentreactionrequest.h"

namespace QtAws {
namespace CodeCommit {

class PutCommentReactionResponsePrivate;

class QTAWSCODECOMMIT_EXPORT PutCommentReactionResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    PutCommentReactionResponse(const PutCommentReactionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutCommentReactionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutCommentReactionResponse)
    Q_DISABLE_COPY(PutCommentReactionResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

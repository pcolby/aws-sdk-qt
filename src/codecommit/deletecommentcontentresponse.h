// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMMENTCONTENTRESPONSE_H
#define QTAWS_DELETECOMMENTCONTENTRESPONSE_H

#include "codecommitresponse.h"
#include "deletecommentcontentrequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteCommentContentResponsePrivate;

class QTAWSCODECOMMIT_EXPORT DeleteCommentContentResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    DeleteCommentContentResponse(const DeleteCommentContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCommentContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCommentContentResponse)
    Q_DISABLE_COPY(DeleteCommentContentResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

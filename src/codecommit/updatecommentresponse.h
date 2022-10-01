// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMMENTRESPONSE_H
#define QTAWS_UPDATECOMMENTRESPONSE_H

#include "codecommitresponse.h"
#include "updatecommentrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateCommentResponsePrivate;

class QTAWSCODECOMMIT_EXPORT UpdateCommentResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    UpdateCommentResponse(const UpdateCommentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCommentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCommentResponse)
    Q_DISABLE_COPY(UpdateCommentResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

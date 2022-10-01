// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTRESPONSE_H
#define QTAWS_GETCOMMENTRESPONSE_H

#include "codecommitresponse.h"
#include "getcommentrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetCommentResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetCommentResponse(const GetCommentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCommentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCommentResponse)
    Q_DISABLE_COPY(GetCommentResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

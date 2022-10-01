// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTREACTIONSRESPONSE_H
#define QTAWS_GETCOMMENTREACTIONSRESPONSE_H

#include "codecommitresponse.h"
#include "getcommentreactionsrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentReactionsResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetCommentReactionsResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetCommentReactionsResponse(const GetCommentReactionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCommentReactionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCommentReactionsResponse)
    Q_DISABLE_COPY(GetCommentReactionsResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

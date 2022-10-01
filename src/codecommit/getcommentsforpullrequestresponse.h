// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTSFORPULLREQUESTRESPONSE_H
#define QTAWS_GETCOMMENTSFORPULLREQUESTRESPONSE_H

#include "codecommitresponse.h"
#include "getcommentsforpullrequestrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentsForPullRequestResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetCommentsForPullRequestResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetCommentsForPullRequestResponse(const GetCommentsForPullRequestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCommentsForPullRequestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCommentsForPullRequestResponse)
    Q_DISABLE_COPY(GetCommentsForPullRequestResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

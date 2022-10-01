// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPULLREQUESTAPPROVALSTATESRESPONSE_H
#define QTAWS_GETPULLREQUESTAPPROVALSTATESRESPONSE_H

#include "codecommitresponse.h"
#include "getpullrequestapprovalstatesrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetPullRequestApprovalStatesResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetPullRequestApprovalStatesResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetPullRequestApprovalStatesResponse(const GetPullRequestApprovalStatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPullRequestApprovalStatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPullRequestApprovalStatesResponse)
    Q_DISABLE_COPY(GetPullRequestApprovalStatesResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

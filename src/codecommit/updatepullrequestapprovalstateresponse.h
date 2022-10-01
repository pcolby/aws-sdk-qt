// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTAPPROVALSTATERESPONSE_H
#define QTAWS_UPDATEPULLREQUESTAPPROVALSTATERESPONSE_H

#include "codecommitresponse.h"
#include "updatepullrequestapprovalstaterequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestApprovalStateResponsePrivate;

class QTAWSCODECOMMIT_EXPORT UpdatePullRequestApprovalStateResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    UpdatePullRequestApprovalStateResponse(const UpdatePullRequestApprovalStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePullRequestApprovalStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePullRequestApprovalStateResponse)
    Q_DISABLE_COPY(UpdatePullRequestApprovalStateResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

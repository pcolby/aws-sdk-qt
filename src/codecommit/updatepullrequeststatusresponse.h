// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTSTATUSRESPONSE_H
#define QTAWS_UPDATEPULLREQUESTSTATUSRESPONSE_H

#include "codecommitresponse.h"
#include "updatepullrequeststatusrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestStatusResponsePrivate;

class QTAWSCODECOMMIT_EXPORT UpdatePullRequestStatusResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    UpdatePullRequestStatusResponse(const UpdatePullRequestStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePullRequestStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePullRequestStatusResponse)
    Q_DISABLE_COPY(UpdatePullRequestStatusResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

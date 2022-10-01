// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTTITLERESPONSE_H
#define QTAWS_UPDATEPULLREQUESTTITLERESPONSE_H

#include "codecommitresponse.h"
#include "updatepullrequesttitlerequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestTitleResponsePrivate;

class QTAWSCODECOMMIT_EXPORT UpdatePullRequestTitleResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    UpdatePullRequestTitleResponse(const UpdatePullRequestTitleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePullRequestTitleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePullRequestTitleResponse)
    Q_DISABLE_COPY(UpdatePullRequestTitleResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

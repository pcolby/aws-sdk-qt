// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPULLREQUESTRESPONSE_H
#define QTAWS_CREATEPULLREQUESTRESPONSE_H

#include "codecommitresponse.h"
#include "createpullrequestrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreatePullRequestResponsePrivate;

class QTAWSCODECOMMIT_EXPORT CreatePullRequestResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    CreatePullRequestResponse(const CreatePullRequestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePullRequestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePullRequestResponse)
    Q_DISABLE_COPY(CreatePullRequestResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

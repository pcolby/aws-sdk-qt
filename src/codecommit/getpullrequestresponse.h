// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPULLREQUESTRESPONSE_H
#define QTAWS_GETPULLREQUESTRESPONSE_H

#include "codecommitresponse.h"
#include "getpullrequestrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetPullRequestResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetPullRequestResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetPullRequestResponse(const GetPullRequestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPullRequestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPullRequestResponse)
    Q_DISABLE_COPY(GetPullRequestResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

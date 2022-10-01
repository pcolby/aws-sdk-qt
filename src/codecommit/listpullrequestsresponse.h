// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPULLREQUESTSRESPONSE_H
#define QTAWS_LISTPULLREQUESTSRESPONSE_H

#include "codecommitresponse.h"
#include "listpullrequestsrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListPullRequestsResponsePrivate;

class QTAWSCODECOMMIT_EXPORT ListPullRequestsResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    ListPullRequestsResponse(const ListPullRequestsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPullRequestsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPullRequestsResponse)
    Q_DISABLE_COPY(ListPullRequestsResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

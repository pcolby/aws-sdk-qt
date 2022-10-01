// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPULLREQUESTSRESPONSE_P_H
#define QTAWS_LISTPULLREQUESTSRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class ListPullRequestsResponse;

class ListPullRequestsResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit ListPullRequestsResponsePrivate(ListPullRequestsResponse * const q);

    void parseListPullRequestsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPullRequestsResponse)
    Q_DISABLE_COPY(ListPullRequestsResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

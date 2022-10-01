// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTSFORPULLREQUESTRESPONSE_P_H
#define QTAWS_GETCOMMENTSFORPULLREQUESTRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentsForPullRequestResponse;

class GetCommentsForPullRequestResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetCommentsForPullRequestResponsePrivate(GetCommentsForPullRequestResponse * const q);

    void parseGetCommentsForPullRequestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCommentsForPullRequestResponse)
    Q_DISABLE_COPY(GetCommentsForPullRequestResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

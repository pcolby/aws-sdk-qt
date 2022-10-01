// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPULLREQUESTRESPONSE_P_H
#define QTAWS_GETPULLREQUESTRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetPullRequestResponse;

class GetPullRequestResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetPullRequestResponsePrivate(GetPullRequestResponse * const q);

    void parseGetPullRequestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPullRequestResponse)
    Q_DISABLE_COPY(GetPullRequestResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

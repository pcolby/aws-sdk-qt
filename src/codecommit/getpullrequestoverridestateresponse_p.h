// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPULLREQUESTOVERRIDESTATERESPONSE_P_H
#define QTAWS_GETPULLREQUESTOVERRIDESTATERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetPullRequestOverrideStateResponse;

class GetPullRequestOverrideStateResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetPullRequestOverrideStateResponsePrivate(GetPullRequestOverrideStateResponse * const q);

    void parseGetPullRequestOverrideStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPullRequestOverrideStateResponse)
    Q_DISABLE_COPY(GetPullRequestOverrideStateResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

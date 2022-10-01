// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPULLREQUESTRESPONSE_P_H
#define QTAWS_CREATEPULLREQUESTRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class CreatePullRequestResponse;

class CreatePullRequestResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit CreatePullRequestResponsePrivate(CreatePullRequestResponse * const q);

    void parseCreatePullRequestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePullRequestResponse)
    Q_DISABLE_COPY(CreatePullRequestResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

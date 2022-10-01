// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTTITLERESPONSE_P_H
#define QTAWS_UPDATEPULLREQUESTTITLERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestTitleResponse;

class UpdatePullRequestTitleResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdatePullRequestTitleResponsePrivate(UpdatePullRequestTitleResponse * const q);

    void parseUpdatePullRequestTitleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePullRequestTitleResponse)
    Q_DISABLE_COPY(UpdatePullRequestTitleResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

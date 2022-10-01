// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTSTATUSRESPONSE_P_H
#define QTAWS_UPDATEPULLREQUESTSTATUSRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestStatusResponse;

class UpdatePullRequestStatusResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdatePullRequestStatusResponsePrivate(UpdatePullRequestStatusResponse * const q);

    void parseUpdatePullRequestStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePullRequestStatusResponse)
    Q_DISABLE_COPY(UpdatePullRequestStatusResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

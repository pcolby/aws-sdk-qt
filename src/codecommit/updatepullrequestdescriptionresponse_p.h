// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTDESCRIPTIONRESPONSE_P_H
#define QTAWS_UPDATEPULLREQUESTDESCRIPTIONRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestDescriptionResponse;

class UpdatePullRequestDescriptionResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdatePullRequestDescriptionResponsePrivate(UpdatePullRequestDescriptionResponse * const q);

    void parseUpdatePullRequestDescriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePullRequestDescriptionResponse)
    Q_DISABLE_COPY(UpdatePullRequestDescriptionResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

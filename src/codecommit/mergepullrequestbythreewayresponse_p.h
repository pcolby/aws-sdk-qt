// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPULLREQUESTBYTHREEWAYRESPONSE_P_H
#define QTAWS_MERGEPULLREQUESTBYTHREEWAYRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestByThreeWayResponse;

class MergePullRequestByThreeWayResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit MergePullRequestByThreeWayResponsePrivate(MergePullRequestByThreeWayResponse * const q);

    void parseMergePullRequestByThreeWayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MergePullRequestByThreeWayResponse)
    Q_DISABLE_COPY(MergePullRequestByThreeWayResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPULLREQUESTBYFASTFORWARDRESPONSE_P_H
#define QTAWS_MERGEPULLREQUESTBYFASTFORWARDRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestByFastForwardResponse;

class MergePullRequestByFastForwardResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit MergePullRequestByFastForwardResponsePrivate(MergePullRequestByFastForwardResponse * const q);

    void parseMergePullRequestByFastForwardResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MergePullRequestByFastForwardResponse)
    Q_DISABLE_COPY(MergePullRequestByFastForwardResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

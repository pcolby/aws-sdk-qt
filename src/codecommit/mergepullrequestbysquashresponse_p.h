// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPULLREQUESTBYSQUASHRESPONSE_P_H
#define QTAWS_MERGEPULLREQUESTBYSQUASHRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestBySquashResponse;

class MergePullRequestBySquashResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit MergePullRequestBySquashResponsePrivate(MergePullRequestBySquashResponse * const q);

    void parseMergePullRequestBySquashResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MergePullRequestBySquashResponse)
    Q_DISABLE_COPY(MergePullRequestBySquashResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

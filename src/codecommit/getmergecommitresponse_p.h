// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMERGECOMMITRESPONSE_P_H
#define QTAWS_GETMERGECOMMITRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetMergeCommitResponse;

class GetMergeCommitResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetMergeCommitResponsePrivate(GetMergeCommitResponse * const q);

    void parseGetMergeCommitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMergeCommitResponse)
    Q_DISABLE_COPY(GetMergeCommitResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

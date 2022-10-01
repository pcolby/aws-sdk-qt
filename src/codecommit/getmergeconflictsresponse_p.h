// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMERGECONFLICTSRESPONSE_P_H
#define QTAWS_GETMERGECONFLICTSRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetMergeConflictsResponse;

class GetMergeConflictsResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetMergeConflictsResponsePrivate(GetMergeConflictsResponse * const q);

    void parseGetMergeConflictsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMergeConflictsResponse)
    Q_DISABLE_COPY(GetMergeConflictsResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

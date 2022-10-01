// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMERGECONFLICTSRESPONSE_P_H
#define QTAWS_DESCRIBEMERGECONFLICTSRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class DescribeMergeConflictsResponse;

class DescribeMergeConflictsResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit DescribeMergeConflictsResponsePrivate(DescribeMergeConflictsResponse * const q);

    void parseDescribeMergeConflictsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMergeConflictsResponse)
    Q_DISABLE_COPY(DescribeMergeConflictsResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUNREFERENCEDMERGECOMMITRESPONSE_P_H
#define QTAWS_CREATEUNREFERENCEDMERGECOMMITRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class CreateUnreferencedMergeCommitResponse;

class CreateUnreferencedMergeCommitResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit CreateUnreferencedMergeCommitResponsePrivate(CreateUnreferencedMergeCommitResponse * const q);

    void parseCreateUnreferencedMergeCommitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUnreferencedMergeCommitResponse)
    Q_DISABLE_COPY(CreateUnreferencedMergeCommitResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

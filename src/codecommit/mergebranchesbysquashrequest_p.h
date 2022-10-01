// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEBRANCHESBYSQUASHREQUEST_P_H
#define QTAWS_MERGEBRANCHESBYSQUASHREQUEST_P_H

#include "codecommitrequest_p.h"
#include "mergebranchesbysquashrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergeBranchesBySquashRequest;

class MergeBranchesBySquashRequestPrivate : public CodeCommitRequestPrivate {

public:
    MergeBranchesBySquashRequestPrivate(const CodeCommitRequest::Action action,
                                   MergeBranchesBySquashRequest * const q);
    MergeBranchesBySquashRequestPrivate(const MergeBranchesBySquashRequestPrivate &other,
                                   MergeBranchesBySquashRequest * const q);

private:
    Q_DECLARE_PUBLIC(MergeBranchesBySquashRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

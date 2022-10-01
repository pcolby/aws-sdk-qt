// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMERGEOPTIONSREQUEST_P_H
#define QTAWS_GETMERGEOPTIONSREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getmergeoptionsrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetMergeOptionsRequest;

class GetMergeOptionsRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetMergeOptionsRequestPrivate(const CodeCommitRequest::Action action,
                                   GetMergeOptionsRequest * const q);
    GetMergeOptionsRequestPrivate(const GetMergeOptionsRequestPrivate &other,
                                   GetMergeOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMergeOptionsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

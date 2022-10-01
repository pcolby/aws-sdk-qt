// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLOBREQUEST_P_H
#define QTAWS_GETBLOBREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getblobrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetBlobRequest;

class GetBlobRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetBlobRequestPrivate(const CodeCommitRequest::Action action,
                                   GetBlobRequest * const q);
    GetBlobRequestPrivate(const GetBlobRequestPrivate &other,
                                   GetBlobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBlobRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

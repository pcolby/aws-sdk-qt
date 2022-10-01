// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFILEREQUEST_P_H
#define QTAWS_GETFILEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getfilerequest.h"

namespace QtAws {
namespace CodeCommit {

class GetFileRequest;

class GetFileRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetFileRequestPrivate(const CodeCommitRequest::Action action,
                                   GetFileRequest * const q);
    GetFileRequestPrivate(const GetFileRequestPrivate &other,
                                   GetFileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFileRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

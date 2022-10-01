// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFILEREQUEST_P_H
#define QTAWS_PUTFILEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "putfilerequest.h"

namespace QtAws {
namespace CodeCommit {

class PutFileRequest;

class PutFileRequestPrivate : public CodeCommitRequestPrivate {

public:
    PutFileRequestPrivate(const CodeCommitRequest::Action action,
                                   PutFileRequest * const q);
    PutFileRequestPrivate(const PutFileRequestPrivate &other,
                                   PutFileRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutFileRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

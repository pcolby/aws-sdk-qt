// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIFFERENCESREQUEST_P_H
#define QTAWS_GETDIFFERENCESREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getdifferencesrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetDifferencesRequest;

class GetDifferencesRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetDifferencesRequestPrivate(const CodeCommitRequest::Action action,
                                   GetDifferencesRequest * const q);
    GetDifferencesRequestPrivate(const GetDifferencesRequestPrivate &other,
                                   GetDifferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDifferencesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

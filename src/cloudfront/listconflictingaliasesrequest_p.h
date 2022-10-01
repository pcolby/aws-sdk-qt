// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFLICTINGALIASESREQUEST_P_H
#define QTAWS_LISTCONFLICTINGALIASESREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listconflictingaliasesrequest.h"

namespace QtAws {
namespace CloudFront {

class ListConflictingAliasesRequest;

class ListConflictingAliasesRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListConflictingAliasesRequestPrivate(const CloudFrontRequest::Action action,
                                   ListConflictingAliasesRequest * const q);
    ListConflictingAliasesRequestPrivate(const ListConflictingAliasesRequestPrivate &other,
                                   ListConflictingAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConflictingAliasesRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTSREQUEST_P_H
#define QTAWS_LISTHOSTSREQUEST_P_H

#include "codestarconnectionsrequest_p.h"
#include "listhostsrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class ListHostsRequest;

class ListHostsRequestPrivate : public CodeStarconnectionsRequestPrivate {

public:
    ListHostsRequestPrivate(const CodeStarconnectionsRequest::Action action,
                                   ListHostsRequest * const q);
    ListHostsRequestPrivate(const ListHostsRequestPrivate &other,
                                   ListHostsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHostsRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif

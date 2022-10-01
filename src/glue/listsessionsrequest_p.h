// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSESSIONSREQUEST_P_H
#define QTAWS_LISTSESSIONSREQUEST_P_H

#include "gluerequest_p.h"
#include "listsessionsrequest.h"

namespace QtAws {
namespace Glue {

class ListSessionsRequest;

class ListSessionsRequestPrivate : public GlueRequestPrivate {

public:
    ListSessionsRequestPrivate(const GlueRequest::Action action,
                                   ListSessionsRequest * const q);
    ListSessionsRequestPrivate(const ListSessionsRequestPrivate &other,
                                   ListSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSessionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONSREQUEST_P_H
#define QTAWS_GETCONNECTIONSREQUEST_P_H

#include "gluerequest_p.h"
#include "getconnectionsrequest.h"

namespace QtAws {
namespace Glue {

class GetConnectionsRequest;

class GetConnectionsRequestPrivate : public GlueRequestPrivate {

public:
    GetConnectionsRequestPrivate(const GlueRequest::Action action,
                                   GetConnectionsRequest * const q);
    GetConnectionsRequestPrivate(const GetConnectionsRequestPrivate &other,
                                   GetConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

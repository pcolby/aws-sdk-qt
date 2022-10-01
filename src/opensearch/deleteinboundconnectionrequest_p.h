// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINBOUNDCONNECTIONREQUEST_P_H
#define QTAWS_DELETEINBOUNDCONNECTIONREQUEST_P_H

#include "opensearchrequest_p.h"
#include "deleteinboundconnectionrequest.h"

namespace QtAws {
namespace OpenSearch {

class DeleteInboundConnectionRequest;

class DeleteInboundConnectionRequestPrivate : public OpenSearchRequestPrivate {

public:
    DeleteInboundConnectionRequestPrivate(const OpenSearchRequest::Action action,
                                   DeleteInboundConnectionRequest * const q);
    DeleteInboundConnectionRequestPrivate(const DeleteInboundConnectionRequestPrivate &other,
                                   DeleteInboundConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInboundConnectionRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTBOUNDCONNECTIONREQUEST_P_H
#define QTAWS_DELETEOUTBOUNDCONNECTIONREQUEST_P_H

#include "opensearchrequest_p.h"
#include "deleteoutboundconnectionrequest.h"

namespace QtAws {
namespace OpenSearch {

class DeleteOutboundConnectionRequest;

class DeleteOutboundConnectionRequestPrivate : public OpenSearchRequestPrivate {

public:
    DeleteOutboundConnectionRequestPrivate(const OpenSearchRequest::Action action,
                                   DeleteOutboundConnectionRequest * const q);
    DeleteOutboundConnectionRequestPrivate(const DeleteOutboundConnectionRequestPrivate &other,
                                   DeleteOutboundConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOutboundConnectionRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

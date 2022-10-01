// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINBOUNDCONNECTIONREQUEST_P_H
#define QTAWS_REJECTINBOUNDCONNECTIONREQUEST_P_H

#include "opensearchrequest_p.h"
#include "rejectinboundconnectionrequest.h"

namespace QtAws {
namespace OpenSearch {

class RejectInboundConnectionRequest;

class RejectInboundConnectionRequestPrivate : public OpenSearchRequestPrivate {

public:
    RejectInboundConnectionRequestPrivate(const OpenSearchRequest::Action action,
                                   RejectInboundConnectionRequest * const q);
    RejectInboundConnectionRequestPrivate(const RejectInboundConnectionRequestPrivate &other,
                                   RejectInboundConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectInboundConnectionRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

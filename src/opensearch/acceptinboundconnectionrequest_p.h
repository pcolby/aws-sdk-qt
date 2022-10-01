// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINBOUNDCONNECTIONREQUEST_P_H
#define QTAWS_ACCEPTINBOUNDCONNECTIONREQUEST_P_H

#include "opensearchrequest_p.h"
#include "acceptinboundconnectionrequest.h"

namespace QtAws {
namespace OpenSearch {

class AcceptInboundConnectionRequest;

class AcceptInboundConnectionRequestPrivate : public OpenSearchRequestPrivate {

public:
    AcceptInboundConnectionRequestPrivate(const OpenSearchRequest::Action action,
                                   AcceptInboundConnectionRequest * const q);
    AcceptInboundConnectionRequestPrivate(const AcceptInboundConnectionRequestPrivate &other,
                                   AcceptInboundConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptInboundConnectionRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

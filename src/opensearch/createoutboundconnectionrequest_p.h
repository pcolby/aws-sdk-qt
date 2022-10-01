// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOUTBOUNDCONNECTIONREQUEST_P_H
#define QTAWS_CREATEOUTBOUNDCONNECTIONREQUEST_P_H

#include "opensearchrequest_p.h"
#include "createoutboundconnectionrequest.h"

namespace QtAws {
namespace OpenSearch {

class CreateOutboundConnectionRequest;

class CreateOutboundConnectionRequestPrivate : public OpenSearchRequestPrivate {

public:
    CreateOutboundConnectionRequestPrivate(const OpenSearchRequest::Action action,
                                   CreateOutboundConnectionRequest * const q);
    CreateOutboundConnectionRequestPrivate(const CreateOutboundConnectionRequestPrivate &other,
                                   CreateOutboundConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOutboundConnectionRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

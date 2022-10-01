// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINBOUNDCONNECTIONREQUEST_H
#define QTAWS_REJECTINBOUNDCONNECTIONREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class RejectInboundConnectionRequestPrivate;

class QTAWSOPENSEARCH_EXPORT RejectInboundConnectionRequest : public OpenSearchRequest {

public:
    RejectInboundConnectionRequest(const RejectInboundConnectionRequest &other);
    RejectInboundConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectInboundConnectionRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

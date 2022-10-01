// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINBOUNDCONNECTIONREQUEST_H
#define QTAWS_ACCEPTINBOUNDCONNECTIONREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class AcceptInboundConnectionRequestPrivate;

class QTAWSOPENSEARCH_EXPORT AcceptInboundConnectionRequest : public OpenSearchRequest {

public:
    AcceptInboundConnectionRequest(const AcceptInboundConnectionRequest &other);
    AcceptInboundConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptInboundConnectionRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

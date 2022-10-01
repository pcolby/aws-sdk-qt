// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINBOUNDCONNECTIONREQUEST_H
#define QTAWS_DELETEINBOUNDCONNECTIONREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class DeleteInboundConnectionRequestPrivate;

class QTAWSOPENSEARCH_EXPORT DeleteInboundConnectionRequest : public OpenSearchRequest {

public:
    DeleteInboundConnectionRequest(const DeleteInboundConnectionRequest &other);
    DeleteInboundConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInboundConnectionRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

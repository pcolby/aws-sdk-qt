// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTBOUNDCONNECTIONREQUEST_H
#define QTAWS_DELETEOUTBOUNDCONNECTIONREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class DeleteOutboundConnectionRequestPrivate;

class QTAWSOPENSEARCH_EXPORT DeleteOutboundConnectionRequest : public OpenSearchRequest {

public:
    DeleteOutboundConnectionRequest(const DeleteOutboundConnectionRequest &other);
    DeleteOutboundConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOutboundConnectionRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

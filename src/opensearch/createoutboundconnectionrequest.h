// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOUTBOUNDCONNECTIONREQUEST_H
#define QTAWS_CREATEOUTBOUNDCONNECTIONREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class CreateOutboundConnectionRequestPrivate;

class QTAWSOPENSEARCH_EXPORT CreateOutboundConnectionRequest : public OpenSearchRequest {

public:
    CreateOutboundConnectionRequest(const CreateOutboundConnectionRequest &other);
    CreateOutboundConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOutboundConnectionRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

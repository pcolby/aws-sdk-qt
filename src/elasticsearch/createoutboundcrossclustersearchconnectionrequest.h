// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_H
#define QTAWS_CREATEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class CreateOutboundCrossClusterSearchConnectionRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT CreateOutboundCrossClusterSearchConnectionRequest : public ElasticsearchRequest {

public:
    CreateOutboundCrossClusterSearchConnectionRequest(const CreateOutboundCrossClusterSearchConnectionRequest &other);
    CreateOutboundCrossClusterSearchConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOutboundCrossClusterSearchConnectionRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

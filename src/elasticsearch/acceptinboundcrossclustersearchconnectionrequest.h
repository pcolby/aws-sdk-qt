// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_H
#define QTAWS_ACCEPTINBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class AcceptInboundCrossClusterSearchConnectionRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT AcceptInboundCrossClusterSearchConnectionRequest : public ElasticsearchRequest {

public:
    AcceptInboundCrossClusterSearchConnectionRequest(const AcceptInboundCrossClusterSearchConnectionRequest &other);
    AcceptInboundCrossClusterSearchConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptInboundCrossClusterSearchConnectionRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

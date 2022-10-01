// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEELASTICSEARCHDOMAINCONFIGREQUEST_H
#define QTAWS_UPDATEELASTICSEARCHDOMAINCONFIGREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class UpdateElasticsearchDomainConfigRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT UpdateElasticsearchDomainConfigRequest : public ElasticsearchRequest {

public:
    UpdateElasticsearchDomainConfigRequest(const UpdateElasticsearchDomainConfigRequest &other);
    UpdateElasticsearchDomainConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateElasticsearchDomainConfigRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

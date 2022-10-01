// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPACKAGEREQUEST_H
#define QTAWS_ASSOCIATEPACKAGEREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class AssociatePackageRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT AssociatePackageRequest : public ElasticsearchRequest {

public:
    AssociatePackageRequest(const AssociatePackageRequest &other);
    AssociatePackageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePackageRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

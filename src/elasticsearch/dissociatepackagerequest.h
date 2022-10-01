// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISSOCIATEPACKAGEREQUEST_H
#define QTAWS_DISSOCIATEPACKAGEREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DissociatePackageRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT DissociatePackageRequest : public ElasticsearchRequest {

public:
    DissociatePackageRequest(const DissociatePackageRequest &other);
    DissociatePackageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DissociatePackageRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

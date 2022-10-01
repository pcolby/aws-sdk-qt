// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGEREQUEST_H
#define QTAWS_CREATEPACKAGEREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class CreatePackageRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT CreatePackageRequest : public ElasticsearchRequest {

public:
    CreatePackageRequest(const CreatePackageRequest &other);
    CreatePackageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePackageRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

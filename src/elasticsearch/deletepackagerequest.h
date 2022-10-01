// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGEREQUEST_H
#define QTAWS_DELETEPACKAGEREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DeletePackageRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT DeletePackageRequest : public ElasticsearchRequest {

public:
    DeletePackageRequest(const DeletePackageRequest &other);
    DeletePackageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePackageRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

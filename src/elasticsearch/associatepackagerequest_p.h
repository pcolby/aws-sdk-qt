// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPACKAGEREQUEST_P_H
#define QTAWS_ASSOCIATEPACKAGEREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "associatepackagerequest.h"

namespace QtAws {
namespace Elasticsearch {

class AssociatePackageRequest;

class AssociatePackageRequestPrivate : public ElasticsearchRequestPrivate {

public:
    AssociatePackageRequestPrivate(const ElasticsearchRequest::Action action,
                                   AssociatePackageRequest * const q);
    AssociatePackageRequestPrivate(const AssociatePackageRequestPrivate &other,
                                   AssociatePackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociatePackageRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

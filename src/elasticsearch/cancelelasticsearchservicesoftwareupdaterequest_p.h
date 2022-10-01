// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELELASTICSEARCHSERVICESOFTWAREUPDATEREQUEST_P_H
#define QTAWS_CANCELELASTICSEARCHSERVICESOFTWAREUPDATEREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "cancelelasticsearchservicesoftwareupdaterequest.h"

namespace QtAws {
namespace Elasticsearch {

class CancelElasticsearchServiceSoftwareUpdateRequest;

class CancelElasticsearchServiceSoftwareUpdateRequestPrivate : public ElasticsearchRequestPrivate {

public:
    CancelElasticsearchServiceSoftwareUpdateRequestPrivate(const ElasticsearchRequest::Action action,
                                   CancelElasticsearchServiceSoftwareUpdateRequest * const q);
    CancelElasticsearchServiceSoftwareUpdateRequestPrivate(const CancelElasticsearchServiceSoftwareUpdateRequestPrivate &other,
                                   CancelElasticsearchServiceSoftwareUpdateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelElasticsearchServiceSoftwareUpdateRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

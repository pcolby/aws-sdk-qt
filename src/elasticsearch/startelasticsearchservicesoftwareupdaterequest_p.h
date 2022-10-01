// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTELASTICSEARCHSERVICESOFTWAREUPDATEREQUEST_P_H
#define QTAWS_STARTELASTICSEARCHSERVICESOFTWAREUPDATEREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "startelasticsearchservicesoftwareupdaterequest.h"

namespace QtAws {
namespace Elasticsearch {

class StartElasticsearchServiceSoftwareUpdateRequest;

class StartElasticsearchServiceSoftwareUpdateRequestPrivate : public ElasticsearchRequestPrivate {

public:
    StartElasticsearchServiceSoftwareUpdateRequestPrivate(const ElasticsearchRequest::Action action,
                                   StartElasticsearchServiceSoftwareUpdateRequest * const q);
    StartElasticsearchServiceSoftwareUpdateRequestPrivate(const StartElasticsearchServiceSoftwareUpdateRequestPrivate &other,
                                   StartElasticsearchServiceSoftwareUpdateRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartElasticsearchServiceSoftwareUpdateRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

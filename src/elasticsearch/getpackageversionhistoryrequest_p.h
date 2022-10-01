// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONHISTORYREQUEST_P_H
#define QTAWS_GETPACKAGEVERSIONHISTORYREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "getpackageversionhistoryrequest.h"

namespace QtAws {
namespace Elasticsearch {

class GetPackageVersionHistoryRequest;

class GetPackageVersionHistoryRequestPrivate : public ElasticsearchRequestPrivate {

public:
    GetPackageVersionHistoryRequestPrivate(const ElasticsearchRequest::Action action,
                                   GetPackageVersionHistoryRequest * const q);
    GetPackageVersionHistoryRequestPrivate(const GetPackageVersionHistoryRequestPrivate &other,
                                   GetPackageVersionHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPackageVersionHistoryRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

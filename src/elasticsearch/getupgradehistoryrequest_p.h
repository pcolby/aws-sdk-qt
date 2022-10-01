// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPGRADEHISTORYREQUEST_P_H
#define QTAWS_GETUPGRADEHISTORYREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "getupgradehistoryrequest.h"

namespace QtAws {
namespace Elasticsearch {

class GetUpgradeHistoryRequest;

class GetUpgradeHistoryRequestPrivate : public ElasticsearchRequestPrivate {

public:
    GetUpgradeHistoryRequestPrivate(const ElasticsearchRequest::Action action,
                                   GetUpgradeHistoryRequest * const q);
    GetUpgradeHistoryRequestPrivate(const GetUpgradeHistoryRequestPrivate &other,
                                   GetUpgradeHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUpgradeHistoryRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

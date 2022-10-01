// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPGRADESTATUSREQUEST_P_H
#define QTAWS_GETUPGRADESTATUSREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "getupgradestatusrequest.h"

namespace QtAws {
namespace Elasticsearch {

class GetUpgradeStatusRequest;

class GetUpgradeStatusRequestPrivate : public ElasticsearchRequestPrivate {

public:
    GetUpgradeStatusRequestPrivate(const ElasticsearchRequest::Action action,
                                   GetUpgradeStatusRequest * const q);
    GetUpgradeStatusRequestPrivate(const GetUpgradeStatusRequestPrivate &other,
                                   GetUpgradeStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUpgradeStatusRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPGRADESTATUSREQUEST_P_H
#define QTAWS_GETUPGRADESTATUSREQUEST_P_H

#include "opensearchrequest_p.h"
#include "getupgradestatusrequest.h"

namespace QtAws {
namespace OpenSearch {

class GetUpgradeStatusRequest;

class GetUpgradeStatusRequestPrivate : public OpenSearchRequestPrivate {

public:
    GetUpgradeStatusRequestPrivate(const OpenSearchRequest::Action action,
                                   GetUpgradeStatusRequest * const q);
    GetUpgradeStatusRequestPrivate(const GetUpgradeStatusRequestPrivate &other,
                                   GetUpgradeStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUpgradeStatusRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

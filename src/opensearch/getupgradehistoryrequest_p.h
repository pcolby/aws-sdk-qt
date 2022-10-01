// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPGRADEHISTORYREQUEST_P_H
#define QTAWS_GETUPGRADEHISTORYREQUEST_P_H

#include "opensearchrequest_p.h"
#include "getupgradehistoryrequest.h"

namespace QtAws {
namespace OpenSearch {

class GetUpgradeHistoryRequest;

class GetUpgradeHistoryRequestPrivate : public OpenSearchRequestPrivate {

public:
    GetUpgradeHistoryRequestPrivate(const OpenSearchRequest::Action action,
                                   GetUpgradeHistoryRequest * const q);
    GetUpgradeHistoryRequestPrivate(const GetUpgradeHistoryRequestPrivate &other,
                                   GetUpgradeHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUpgradeHistoryRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPGRADEHISTORYRESPONSE_P_H
#define QTAWS_GETUPGRADEHISTORYRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class GetUpgradeHistoryResponse;

class GetUpgradeHistoryResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit GetUpgradeHistoryResponsePrivate(GetUpgradeHistoryResponse * const q);

    void parseGetUpgradeHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUpgradeHistoryResponse)
    Q_DISABLE_COPY(GetUpgradeHistoryResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

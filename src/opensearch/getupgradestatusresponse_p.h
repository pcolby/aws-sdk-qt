// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPGRADESTATUSRESPONSE_P_H
#define QTAWS_GETUPGRADESTATUSRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class GetUpgradeStatusResponse;

class GetUpgradeStatusResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit GetUpgradeStatusResponsePrivate(GetUpgradeStatusResponse * const q);

    void parseGetUpgradeStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUpgradeStatusResponse)
    Q_DISABLE_COPY(GetUpgradeStatusResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

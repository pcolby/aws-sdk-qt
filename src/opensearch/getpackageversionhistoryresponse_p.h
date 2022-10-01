// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONHISTORYRESPONSE_P_H
#define QTAWS_GETPACKAGEVERSIONHISTORYRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class GetPackageVersionHistoryResponse;

class GetPackageVersionHistoryResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit GetPackageVersionHistoryResponsePrivate(GetPackageVersionHistoryResponse * const q);

    void parseGetPackageVersionHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPackageVersionHistoryResponse)
    Q_DISABLE_COPY(GetPackageVersionHistoryResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

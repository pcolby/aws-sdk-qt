// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPACKAGERESPONSE_P_H
#define QTAWS_UPDATEPACKAGERESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class UpdatePackageResponse;

class UpdatePackageResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit UpdatePackageResponsePrivate(UpdatePackageResponse * const q);

    void parseUpdatePackageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePackageResponse)
    Q_DISABLE_COPY(UpdatePackageResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

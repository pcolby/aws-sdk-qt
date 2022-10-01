// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGERESPONSE_P_H
#define QTAWS_CREATEPACKAGERESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class CreatePackageResponse;

class CreatePackageResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit CreatePackageResponsePrivate(CreatePackageResponse * const q);

    void parseCreatePackageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePackageResponse)
    Q_DISABLE_COPY(CreatePackageResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

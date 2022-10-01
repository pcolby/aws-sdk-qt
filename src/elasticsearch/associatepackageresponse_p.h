// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPACKAGERESPONSE_P_H
#define QTAWS_ASSOCIATEPACKAGERESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class AssociatePackageResponse;

class AssociatePackageResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit AssociatePackageResponsePrivate(AssociatePackageResponse * const q);

    void parseAssociatePackageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociatePackageResponse)
    Q_DISABLE_COPY(AssociatePackageResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif

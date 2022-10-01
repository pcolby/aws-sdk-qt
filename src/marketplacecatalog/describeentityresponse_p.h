// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITYRESPONSE_P_H
#define QTAWS_DESCRIBEENTITYRESPONSE_P_H

#include "marketplacecatalogresponse_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

class DescribeEntityResponse;

class DescribeEntityResponsePrivate : public MarketplaceCatalogResponsePrivate {

public:

    explicit DescribeEntityResponsePrivate(DescribeEntityResponse * const q);

    void parseDescribeEntityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEntityResponse)
    Q_DISABLE_COPY(DescribeEntityResponsePrivate)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif

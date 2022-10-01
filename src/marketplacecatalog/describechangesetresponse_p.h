// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANGESETRESPONSE_P_H
#define QTAWS_DESCRIBECHANGESETRESPONSE_P_H

#include "marketplacecatalogresponse_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

class DescribeChangeSetResponse;

class DescribeChangeSetResponsePrivate : public MarketplaceCatalogResponsePrivate {

public:

    explicit DescribeChangeSetResponsePrivate(DescribeChangeSetResponse * const q);

    void parseDescribeChangeSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeChangeSetResponse)
    Q_DISABLE_COPY(DescribeChangeSetResponsePrivate)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEACTIONRESPONSE_P_H
#define QTAWS_DESCRIBESERVICEACTIONRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeServiceActionResponse;

class DescribeServiceActionResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeServiceActionResponsePrivate(DescribeServiceActionResponse * const q);

    void parseDescribeServiceActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeServiceActionResponse)
    Q_DISABLE_COPY(DescribeServiceActionResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGOPTIONRESPONSE_P_H
#define QTAWS_DESCRIBETAGOPTIONRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeTagOptionResponse;

class DescribeTagOptionResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeTagOptionResponsePrivate(DescribeTagOptionResponse * const q);

    void parseDescribeTagOptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTagOptionResponse)
    Q_DISABLE_COPY(DescribeTagOptionResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif

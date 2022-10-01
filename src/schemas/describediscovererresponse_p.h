// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDISCOVERERRESPONSE_P_H
#define QTAWS_DESCRIBEDISCOVERERRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class DescribeDiscovererResponse;

class DescribeDiscovererResponsePrivate : public SchemasResponsePrivate {

public:

    explicit DescribeDiscovererResponsePrivate(DescribeDiscovererResponse * const q);

    void parseDescribeDiscovererResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDiscovererResponse)
    Q_DISABLE_COPY(DescribeDiscovererResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif

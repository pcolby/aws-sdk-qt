// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEMARESPONSE_P_H
#define QTAWS_DESCRIBESCHEMARESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class DescribeSchemaResponse;

class DescribeSchemaResponsePrivate : public SchemasResponsePrivate {

public:

    explicit DescribeSchemaResponsePrivate(DescribeSchemaResponse * const q);

    void parseDescribeSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSchemaResponse)
    Q_DISABLE_COPY(DescribeSchemaResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODEBINDINGRESPONSE_P_H
#define QTAWS_DESCRIBECODEBINDINGRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class DescribeCodeBindingResponse;

class DescribeCodeBindingResponsePrivate : public SchemasResponsePrivate {

public:

    explicit DescribeCodeBindingResponsePrivate(DescribeCodeBindingResponse * const q);

    void parseDescribeCodeBindingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCodeBindingResponse)
    Q_DISABLE_COPY(DescribeCodeBindingResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif

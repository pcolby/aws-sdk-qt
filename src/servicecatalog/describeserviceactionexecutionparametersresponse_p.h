// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEACTIONEXECUTIONPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBESERVICEACTIONEXECUTIONPARAMETERSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeServiceActionExecutionParametersResponse;

class DescribeServiceActionExecutionParametersResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeServiceActionExecutionParametersResponsePrivate(DescribeServiceActionExecutionParametersResponse * const q);

    void parseDescribeServiceActionExecutionParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeServiceActionExecutionParametersResponse)
    Q_DISABLE_COPY(DescribeServiceActionExecutionParametersResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif

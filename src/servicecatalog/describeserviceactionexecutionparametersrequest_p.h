// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEACTIONEXECUTIONPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBESERVICEACTIONEXECUTIONPARAMETERSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeserviceactionexecutionparametersrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeServiceActionExecutionParametersRequest;

class DescribeServiceActionExecutionParametersRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeServiceActionExecutionParametersRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeServiceActionExecutionParametersRequest * const q);
    DescribeServiceActionExecutionParametersRequestPrivate(const DescribeServiceActionExecutionParametersRequestPrivate &other,
                                   DescribeServiceActionExecutionParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeServiceActionExecutionParametersRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEACTIONEXECUTIONPARAMETERSREQUEST_H
#define QTAWS_DESCRIBESERVICEACTIONEXECUTIONPARAMETERSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeServiceActionExecutionParametersRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeServiceActionExecutionParametersRequest : public ServiceCatalogRequest {

public:
    DescribeServiceActionExecutionParametersRequest(const DescribeServiceActionExecutionParametersRequest &other);
    DescribeServiceActionExecutionParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceActionExecutionParametersRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEACTIONEXECUTIONPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBESERVICEACTIONEXECUTIONPARAMETERSRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeserviceactionexecutionparametersrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeServiceActionExecutionParametersResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeServiceActionExecutionParametersResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeServiceActionExecutionParametersResponse(const DescribeServiceActionExecutionParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServiceActionExecutionParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceActionExecutionParametersResponse)
    Q_DISABLE_COPY(DescribeServiceActionExecutionParametersResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif

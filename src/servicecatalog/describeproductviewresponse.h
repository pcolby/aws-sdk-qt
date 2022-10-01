// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTVIEWRESPONSE_H
#define QTAWS_DESCRIBEPRODUCTVIEWRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeproductviewrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProductViewResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeProductViewResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeProductViewResponse(const DescribeProductViewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProductViewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProductViewResponse)
    Q_DISABLE_COPY(DescribeProductViewResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif

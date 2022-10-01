// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTRESPONSE_H
#define QTAWS_DESCRIBEPRODUCTRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProductResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeProductResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeProductResponse(const DescribeProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProductResponse)
    Q_DISABLE_COPY(DescribeProductResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif

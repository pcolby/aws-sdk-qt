// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTSRESPONSE_H
#define QTAWS_DESCRIBEPRODUCTSRESPONSE_H

#include "securityhubresponse.h"
#include "describeproductsrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeProductsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DescribeProductsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    DescribeProductsResponse(const DescribeProductsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProductsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProductsResponse)
    Q_DISABLE_COPY(DescribeProductsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPRESSIONSRESPONSE_H
#define QTAWS_DESCRIBEEXPRESSIONSRESPONSE_H

#include "cloudsearchresponse.h"
#include "describeexpressionsrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeExpressionsResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeExpressionsResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DescribeExpressionsResponse(const DescribeExpressionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeExpressionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExpressionsResponse)
    Q_DISABLE_COPY(DescribeExpressionsResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

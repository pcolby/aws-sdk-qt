// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTECALCULATORRESPONSE_H
#define QTAWS_DESCRIBEROUTECALCULATORRESPONSE_H

#include "locationresponse.h"
#include "describeroutecalculatorrequest.h"

namespace QtAws {
namespace Location {

class DescribeRouteCalculatorResponsePrivate;

class QTAWSLOCATION_EXPORT DescribeRouteCalculatorResponse : public LocationResponse {
    Q_OBJECT

public:
    DescribeRouteCalculatorResponse(const DescribeRouteCalculatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRouteCalculatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRouteCalculatorResponse)
    Q_DISABLE_COPY(DescribeRouteCalculatorResponse)

};

} // namespace Location
} // namespace QtAws

#endif

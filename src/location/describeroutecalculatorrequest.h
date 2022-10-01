// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTECALCULATORREQUEST_H
#define QTAWS_DESCRIBEROUTECALCULATORREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class DescribeRouteCalculatorRequestPrivate;

class QTAWSLOCATION_EXPORT DescribeRouteCalculatorRequest : public LocationRequest {

public:
    DescribeRouteCalculatorRequest(const DescribeRouteCalculatorRequest &other);
    DescribeRouteCalculatorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRouteCalculatorRequest)

};

} // namespace Location
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETIMESERIESREQUEST_H
#define QTAWS_DESCRIBETIMESERIESREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeTimeSeriesRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeTimeSeriesRequest : public IoTSiteWiseRequest {

public:
    DescribeTimeSeriesRequest(const DescribeTimeSeriesRequest &other);
    DescribeTimeSeriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTimeSeriesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

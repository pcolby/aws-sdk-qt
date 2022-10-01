// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDASHBOARDREQUEST_H
#define QTAWS_DESCRIBEDASHBOARDREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeDashboardRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeDashboardRequest : public IoTSiteWiseRequest {

public:
    DescribeDashboardRequest(const DescribeDashboardRequest &other);
    DescribeDashboardRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDashboardRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

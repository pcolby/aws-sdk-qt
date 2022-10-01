// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTIMESERIESREQUEST_H
#define QTAWS_LISTTIMESERIESREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListTimeSeriesRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT ListTimeSeriesRequest : public IoTSiteWiseRequest {

public:
    ListTimeSeriesRequest(const ListTimeSeriesRequest &other);
    ListTimeSeriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTimeSeriesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

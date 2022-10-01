// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETIMESERIESREQUEST_H
#define QTAWS_DELETETIMESERIESREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteTimeSeriesRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DeleteTimeSeriesRequest : public IoTSiteWiseRequest {

public:
    DeleteTimeSeriesRequest(const DeleteTimeSeriesRequest &other);
    DeleteTimeSeriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTimeSeriesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

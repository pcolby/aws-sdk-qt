// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMONITORREQUEST_H
#define QTAWS_DELETEMONITORREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteMonitorRequestPrivate;

class QTAWSFORECAST_EXPORT DeleteMonitorRequest : public ForecastRequest {

public:
    DeleteMonitorRequest(const DeleteMonitorRequest &other);
    DeleteMonitorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMonitorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

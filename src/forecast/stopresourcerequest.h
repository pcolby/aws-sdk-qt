// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRESOURCEREQUEST_H
#define QTAWS_STOPRESOURCEREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class StopResourceRequestPrivate;

class QTAWSFORECAST_EXPORT StopResourceRequest : public ForecastRequest {

public:
    StopResourceRequest(const StopResourceRequest &other);
    StopResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopResourceRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

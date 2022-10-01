// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFORECASTREQUEST_H
#define QTAWS_DELETEFORECASTREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteForecastRequestPrivate;

class QTAWSFORECAST_EXPORT DeleteForecastRequest : public ForecastRequest {

public:
    DeleteForecastRequest(const DeleteForecastRequest &other);
    DeleteForecastRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

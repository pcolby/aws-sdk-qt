// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMONITORREQUEST_H
#define QTAWS_CREATEMONITORREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateMonitorRequestPrivate;

class QTAWSFORECAST_EXPORT CreateMonitorRequest : public ForecastRequest {

public:
    CreateMonitorRequest(const CreateMonitorRequest &other);
    CreateMonitorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMonitorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

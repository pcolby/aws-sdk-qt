// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPLAINABILITYREQUEST_H
#define QTAWS_CREATEEXPLAINABILITYREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateExplainabilityRequestPrivate;

class QTAWSFORECAST_EXPORT CreateExplainabilityRequest : public ForecastRequest {

public:
    CreateExplainabilityRequest(const CreateExplainabilityRequest &other);
    CreateExplainabilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExplainabilityRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

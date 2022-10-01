// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOPREDICTORREQUEST_H
#define QTAWS_CREATEAUTOPREDICTORREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateAutoPredictorRequestPrivate;

class QTAWSFORECAST_EXPORT CreateAutoPredictorRequest : public ForecastRequest {

public:
    CreateAutoPredictorRequest(const CreateAutoPredictorRequest &other);
    CreateAutoPredictorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAutoPredictorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

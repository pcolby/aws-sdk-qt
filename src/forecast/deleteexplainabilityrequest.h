// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPLAINABILITYREQUEST_H
#define QTAWS_DELETEEXPLAINABILITYREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteExplainabilityRequestPrivate;

class QTAWSFORECAST_EXPORT DeleteExplainabilityRequest : public ForecastRequest {

public:
    DeleteExplainabilityRequest(const DeleteExplainabilityRequest &other);
    DeleteExplainabilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExplainabilityRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

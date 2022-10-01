// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREDICTORREQUEST_H
#define QTAWS_DELETEPREDICTORREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeletePredictorRequestPrivate;

class QTAWSFORECAST_EXPORT DeletePredictorRequest : public ForecastRequest {

public:
    DeletePredictorRequest(const DeletePredictorRequest &other);
    DeletePredictorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePredictorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

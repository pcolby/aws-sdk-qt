// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREDICTORSREQUEST_H
#define QTAWS_LISTPREDICTORSREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ListPredictorsRequestPrivate;

class QTAWSFORECAST_EXPORT ListPredictorsRequest : public ForecastRequest {

public:
    ListPredictorsRequest(const ListPredictorsRequest &other);
    ListPredictorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPredictorsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

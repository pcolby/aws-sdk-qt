// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPLAINABILITIESREQUEST_H
#define QTAWS_LISTEXPLAINABILITIESREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ListExplainabilitiesRequestPrivate;

class QTAWSFORECAST_EXPORT ListExplainabilitiesRequest : public ForecastRequest {

public:
    ListExplainabilitiesRequest(const ListExplainabilitiesRequest &other);
    ListExplainabilitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExplainabilitiesRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

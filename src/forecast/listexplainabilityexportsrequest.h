// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPLAINABILITYEXPORTSREQUEST_H
#define QTAWS_LISTEXPLAINABILITYEXPORTSREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ListExplainabilityExportsRequestPrivate;

class QTAWSFORECAST_EXPORT ListExplainabilityExportsRequest : public ForecastRequest {

public:
    ListExplainabilityExportsRequest(const ListExplainabilityExportsRequest &other);
    ListExplainabilityExportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExplainabilityExportsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

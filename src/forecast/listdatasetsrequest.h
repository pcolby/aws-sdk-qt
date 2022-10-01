// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSREQUEST_H
#define QTAWS_LISTDATASETSREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ListDatasetsRequestPrivate;

class QTAWSFORECAST_EXPORT ListDatasetsRequest : public ForecastRequest {

public:
    ListDatasetsRequest(const ListDatasetsRequest &other);
    ListDatasetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

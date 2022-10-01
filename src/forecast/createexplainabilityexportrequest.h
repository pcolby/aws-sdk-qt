// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPLAINABILITYEXPORTREQUEST_H
#define QTAWS_CREATEEXPLAINABILITYEXPORTREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateExplainabilityExportRequestPrivate;

class QTAWSFORECAST_EXPORT CreateExplainabilityExportRequest : public ForecastRequest {

public:
    CreateExplainabilityExportRequest(const CreateExplainabilityExportRequest &other);
    CreateExplainabilityExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExplainabilityExportRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

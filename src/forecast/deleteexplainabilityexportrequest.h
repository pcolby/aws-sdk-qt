// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPLAINABILITYEXPORTREQUEST_H
#define QTAWS_DELETEEXPLAINABILITYEXPORTREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteExplainabilityExportRequestPrivate;

class QTAWSFORECAST_EXPORT DeleteExplainabilityExportRequest : public ForecastRequest {

public:
    DeleteExplainabilityExportRequest(const DeleteExplainabilityExportRequest &other);
    DeleteExplainabilityExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExplainabilityExportRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

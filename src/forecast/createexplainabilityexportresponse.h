// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPLAINABILITYEXPORTRESPONSE_H
#define QTAWS_CREATEEXPLAINABILITYEXPORTRESPONSE_H

#include "forecastresponse.h"
#include "createexplainabilityexportrequest.h"

namespace QtAws {
namespace Forecast {

class CreateExplainabilityExportResponsePrivate;

class QTAWSFORECAST_EXPORT CreateExplainabilityExportResponse : public ForecastResponse {
    Q_OBJECT

public:
    CreateExplainabilityExportResponse(const CreateExplainabilityExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExplainabilityExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExplainabilityExportResponse)
    Q_DISABLE_COPY(CreateExplainabilityExportResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPLAINABILITYEXPORTRESPONSE_H
#define QTAWS_DELETEEXPLAINABILITYEXPORTRESPONSE_H

#include "forecastresponse.h"
#include "deleteexplainabilityexportrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteExplainabilityExportResponsePrivate;

class QTAWSFORECAST_EXPORT DeleteExplainabilityExportResponse : public ForecastResponse {
    Q_OBJECT

public:
    DeleteExplainabilityExportResponse(const DeleteExplainabilityExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteExplainabilityExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExplainabilityExportResponse)
    Q_DISABLE_COPY(DeleteExplainabilityExportResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif

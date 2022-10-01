// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETIMPORTJOBRESPONSE_H
#define QTAWS_DELETEDATASETIMPORTJOBRESPONSE_H

#include "forecastresponse.h"
#include "deletedatasetimportjobrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteDatasetImportJobResponsePrivate;

class QTAWSFORECAST_EXPORT DeleteDatasetImportJobResponse : public ForecastResponse {
    Q_OBJECT

public:
    DeleteDatasetImportJobResponse(const DeleteDatasetImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDatasetImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatasetImportJobResponse)
    Q_DISABLE_COPY(DeleteDatasetImportJobResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif

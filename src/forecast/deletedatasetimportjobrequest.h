// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETIMPORTJOBREQUEST_H
#define QTAWS_DELETEDATASETIMPORTJOBREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteDatasetImportJobRequestPrivate;

class QTAWSFORECAST_EXPORT DeleteDatasetImportJobRequest : public ForecastRequest {

public:
    DeleteDatasetImportJobRequest(const DeleteDatasetImportJobRequest &other);
    DeleteDatasetImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatasetImportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

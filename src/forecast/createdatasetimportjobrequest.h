// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETIMPORTJOBREQUEST_H
#define QTAWS_CREATEDATASETIMPORTJOBREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateDatasetImportJobRequestPrivate;

class QTAWSFORECAST_EXPORT CreateDatasetImportJobRequest : public ForecastRequest {

public:
    CreateDatasetImportJobRequest(const CreateDatasetImportJobRequest &other);
    CreateDatasetImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatasetImportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

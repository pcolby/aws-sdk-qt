// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETGROUPREQUEST_H
#define QTAWS_DELETEDATASETGROUPREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteDatasetGroupRequestPrivate;

class QTAWSFORECAST_EXPORT DeleteDatasetGroupRequest : public ForecastRequest {

public:
    DeleteDatasetGroupRequest(const DeleteDatasetGroupRequest &other);
    DeleteDatasetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatasetGroupRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCETREEREQUEST_H
#define QTAWS_DELETERESOURCETREEREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteResourceTreeRequestPrivate;

class QTAWSFORECAST_EXPORT DeleteResourceTreeRequest : public ForecastRequest {

public:
    DeleteResourceTreeRequest(const DeleteResourceTreeRequest &other);
    DeleteResourceTreeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceTreeRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

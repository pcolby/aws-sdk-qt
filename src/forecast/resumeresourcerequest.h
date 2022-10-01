// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMERESOURCEREQUEST_H
#define QTAWS_RESUMERESOURCEREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ResumeResourceRequestPrivate;

class QTAWSFORECAST_EXPORT ResumeResourceRequest : public ForecastRequest {

public:
    ResumeResourceRequest(const ResumeResourceRequest &other);
    ResumeResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeResourceRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMERESOURCERESPONSE_H
#define QTAWS_RESUMERESOURCERESPONSE_H

#include "forecastresponse.h"
#include "resumeresourcerequest.h"

namespace QtAws {
namespace Forecast {

class ResumeResourceResponsePrivate;

class QTAWSFORECAST_EXPORT ResumeResourceResponse : public ForecastResponse {
    Q_OBJECT

public:
    ResumeResourceResponse(const ResumeResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResumeResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeResourceResponse)
    Q_DISABLE_COPY(ResumeResourceResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif

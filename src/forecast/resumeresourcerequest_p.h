// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMERESOURCEREQUEST_P_H
#define QTAWS_RESUMERESOURCEREQUEST_P_H

#include "forecastrequest_p.h"
#include "resumeresourcerequest.h"

namespace QtAws {
namespace Forecast {

class ResumeResourceRequest;

class ResumeResourceRequestPrivate : public ForecastRequestPrivate {

public:
    ResumeResourceRequestPrivate(const ForecastRequest::Action action,
                                   ResumeResourceRequest * const q);
    ResumeResourceRequestPrivate(const ResumeResourceRequestPrivate &other,
                                   ResumeResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResumeResourceRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

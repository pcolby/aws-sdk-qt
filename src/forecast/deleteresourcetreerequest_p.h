// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCETREEREQUEST_P_H
#define QTAWS_DELETERESOURCETREEREQUEST_P_H

#include "forecastrequest_p.h"
#include "deleteresourcetreerequest.h"

namespace QtAws {
namespace Forecast {

class DeleteResourceTreeRequest;

class DeleteResourceTreeRequestPrivate : public ForecastRequestPrivate {

public:
    DeleteResourceTreeRequestPrivate(const ForecastRequest::Action action,
                                   DeleteResourceTreeRequest * const q);
    DeleteResourceTreeRequestPrivate(const DeleteResourceTreeRequestPrivate &other,
                                   DeleteResourceTreeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourceTreeRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

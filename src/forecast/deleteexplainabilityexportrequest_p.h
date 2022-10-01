// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPLAINABILITYEXPORTREQUEST_P_H
#define QTAWS_DELETEEXPLAINABILITYEXPORTREQUEST_P_H

#include "forecastrequest_p.h"
#include "deleteexplainabilityexportrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteExplainabilityExportRequest;

class DeleteExplainabilityExportRequestPrivate : public ForecastRequestPrivate {

public:
    DeleteExplainabilityExportRequestPrivate(const ForecastRequest::Action action,
                                   DeleteExplainabilityExportRequest * const q);
    DeleteExplainabilityExportRequestPrivate(const DeleteExplainabilityExportRequestPrivate &other,
                                   DeleteExplainabilityExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteExplainabilityExportRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif

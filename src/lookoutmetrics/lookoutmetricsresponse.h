// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTMETRICSRESPONSE_H
#define QTAWS_LOOKOUTMETRICSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslookoutmetricsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace LookoutMetrics {

class LookoutMetricsResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT LookoutMetricsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LookoutMetricsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    LookoutMetricsResponse(LookoutMetricsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookoutMetricsResponse)
    Q_DISABLE_COPY(LookoutMetricsResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif

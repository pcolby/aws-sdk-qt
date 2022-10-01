// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COSTANDUSAGEREPORTRESPONSE_H
#define QTAWS_COSTANDUSAGEREPORTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscostandusagereportglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CostandUsageReport {

class CostandUsageReportResponsePrivate;

class QTAWSCOSTANDUSAGEREPORT_EXPORT CostandUsageReportResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CostandUsageReportResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CostandUsageReportResponse(CostandUsageReportResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CostandUsageReportResponse)
    Q_DISABLE_COPY(CostandUsageReportResponse)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif

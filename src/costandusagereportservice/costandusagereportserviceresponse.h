/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

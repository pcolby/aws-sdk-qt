// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONCOSTPROFILERRESPONSE_H
#define QTAWS_APPLICATIONCOSTPROFILERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsapplicationcostprofilerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class ApplicationCostProfilerResponsePrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT ApplicationCostProfilerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ApplicationCostProfilerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ApplicationCostProfilerResponse(ApplicationCostProfilerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplicationCostProfilerResponse)
    Q_DISABLE_COPY(ApplicationCostProfilerResponse)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif

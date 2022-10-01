// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEGURUPROFILERRESPONSE_H
#define QTAWS_CODEGURUPROFILERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscodeguruprofilerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CodeGuruProfiler {

class CodeGuruProfilerResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT CodeGuruProfilerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CodeGuruProfilerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CodeGuruProfilerResponse(CodeGuruProfilerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeGuruProfilerResponse)
    Q_DISABLE_COPY(CodeGuruProfilerResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif

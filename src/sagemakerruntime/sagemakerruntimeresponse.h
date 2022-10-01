// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERRUNTIMERESPONSE_H
#define QTAWS_SAGEMAKERRUNTIMERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssagemakerruntimeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SageMakerRuntime {

class SageMakerRuntimeResponsePrivate;

class QTAWSSAGEMAKERRUNTIME_EXPORT SageMakerRuntimeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SageMakerRuntimeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SageMakerRuntimeResponse(SageMakerRuntimeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SageMakerRuntimeResponse)
    Q_DISABLE_COPY(SageMakerRuntimeResponse)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif

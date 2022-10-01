// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERA2IRUNTIMERESPONSE_H
#define QTAWS_SAGEMAKERA2IRUNTIMERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssagemakera2iruntimeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class SageMakerA2IRuntimeResponsePrivate;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT SageMakerA2IRuntimeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SageMakerA2IRuntimeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SageMakerA2IRuntimeResponse(SageMakerA2IRuntimeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SageMakerA2IRuntimeResponse)
    Q_DISABLE_COPY(SageMakerA2IRuntimeResponse)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif

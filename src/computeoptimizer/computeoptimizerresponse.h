// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPUTEOPTIMIZERRESPONSE_H
#define QTAWS_COMPUTEOPTIMIZERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscomputeoptimizerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ComputeOptimizer {

class ComputeOptimizerResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT ComputeOptimizerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ComputeOptimizerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ComputeOptimizerResponse(ComputeOptimizerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ComputeOptimizerResponse)
    Q_DISABLE_COPY(ComputeOptimizerResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif

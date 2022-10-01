// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAMBDARESPONSE_H
#define QTAWS_LAMBDARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslambdaglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Lambda {

class LambdaResponsePrivate;

class QTAWSLAMBDA_EXPORT LambdaResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LambdaResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    LambdaResponse(LambdaResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LambdaResponse)
    Q_DISABLE_COPY(LambdaResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

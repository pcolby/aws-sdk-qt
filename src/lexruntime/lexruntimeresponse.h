// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXRUNTIMERESPONSE_H
#define QTAWS_LEXRUNTIMERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslexruntimeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace LexRuntime {

class LexRuntimeResponsePrivate;

class QTAWSLEXRUNTIME_EXPORT LexRuntimeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LexRuntimeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    LexRuntimeResponse(LexRuntimeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LexRuntimeResponse)
    Q_DISABLE_COPY(LexRuntimeResponse)

};

} // namespace LexRuntime
} // namespace QtAws

#endif

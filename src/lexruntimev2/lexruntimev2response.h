// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXRUNTIMEV2RESPONSE_H
#define QTAWS_LEXRUNTIMEV2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslexruntimev2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace LexRuntimeV2 {

class LexRuntimeV2ResponsePrivate;

class QTAWSLEXRUNTIMEV2_EXPORT LexRuntimeV2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LexRuntimeV2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    LexRuntimeV2Response(LexRuntimeV2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LexRuntimeV2Response)
    Q_DISABLE_COPY(LexRuntimeV2Response)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif

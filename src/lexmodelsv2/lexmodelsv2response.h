// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXMODELSV2RESPONSE_H
#define QTAWS_LEXMODELSV2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslexmodelsv2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace LexModelsV2 {

class LexModelsV2ResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT LexModelsV2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LexModelsV2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    LexModelsV2Response(LexModelsV2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LexModelsV2Response)
    Q_DISABLE_COPY(LexModelsV2Response)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACIE2RESPONSE_H
#define QTAWS_MACIE2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmacie2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Macie2 {

class Macie2ResponsePrivate;

class QTAWSMACIE2_EXPORT Macie2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    Macie2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    Macie2Response(Macie2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Macie2Response)
    Q_DISABLE_COPY(Macie2Response)

};

} // namespace Macie2
} // namespace QtAws

#endif

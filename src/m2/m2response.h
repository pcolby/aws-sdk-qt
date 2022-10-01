// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_M2RESPONSE_H
#define QTAWS_M2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsm2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace M2 {

class M2ResponsePrivate;

class QTAWSM2_EXPORT M2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    M2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    M2Response(M2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(M2Response)
    Q_DISABLE_COPY(M2Response)

};

} // namespace M2
} // namespace QtAws

#endif

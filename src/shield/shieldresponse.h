// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHIELDRESPONSE_H
#define QTAWS_SHIELDRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsshieldglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Shield {

class ShieldResponsePrivate;

class QTAWSSHIELD_EXPORT ShieldResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ShieldResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ShieldResponse(ShieldResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ShieldResponse)
    Q_DISABLE_COPY(ShieldResponse)

};

} // namespace Shield
} // namespace QtAws

#endif

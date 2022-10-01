// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROTONRESPONSE_H
#define QTAWS_PROTONRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsprotonglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Proton {

class ProtonResponsePrivate;

class QTAWSPROTON_EXPORT ProtonResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ProtonResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ProtonResponse(ProtonResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProtonResponse)
    Q_DISABLE_COPY(ProtonResponse)

};

} // namespace Proton
} // namespace QtAws

#endif

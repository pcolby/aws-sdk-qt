// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPSWORKSCMRESPONSE_H
#define QTAWS_OPSWORKSCMRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsopsworkscmglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace OpsWorksCm {

class OpsWorksCmResponsePrivate;

class QTAWSOPSWORKSCM_EXPORT OpsWorksCmResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    OpsWorksCmResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    OpsWorksCmResponse(OpsWorksCmResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OpsWorksCmResponse)
    Q_DISABLE_COPY(OpsWorksCmResponse)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif

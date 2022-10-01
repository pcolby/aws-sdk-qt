// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTROLTOWERRESPONSE_H
#define QTAWS_CONTROLTOWERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscontroltowerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ControlTower {

class ControlTowerResponsePrivate;

class QTAWSCONTROLTOWER_EXPORT ControlTowerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ControlTowerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ControlTowerResponse(ControlTowerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ControlTowerResponse)
    Q_DISABLE_COPY(ControlTowerResponse)

};

} // namespace ControlTower
} // namespace QtAws

#endif

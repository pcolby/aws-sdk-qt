// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GAMELIFTRESPONSE_H
#define QTAWS_GAMELIFTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsgameliftglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace GameLift {

class GameLiftResponsePrivate;

class QTAWSGAMELIFT_EXPORT GameLiftResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    GameLiftResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    GameLiftResponse(GameLiftResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GameLiftResponse)
    Q_DISABLE_COPY(GameLiftResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif

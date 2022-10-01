// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GAMESPARKSRESPONSE_H
#define QTAWS_GAMESPARKSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsgamesparksglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace GameSparks {

class GameSparksResponsePrivate;

class QTAWSGAMESPARKS_EXPORT GameSparksResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    GameSparksResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    GameSparksResponse(GameSparksResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GameSparksResponse)
    Q_DISABLE_COPY(GameSparksResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROBOMAKERRESPONSE_H
#define QTAWS_ROBOMAKERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsrobomakerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace RoboMaker {

class RoboMakerResponsePrivate;

class QTAWSROBOMAKER_EXPORT RoboMakerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    RoboMakerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    RoboMakerResponse(RoboMakerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RoboMakerResponse)
    Q_DISABLE_COPY(RoboMakerResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

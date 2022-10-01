// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNOWBALLRESPONSE_H
#define QTAWS_SNOWBALLRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssnowballglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Snowball {

class SnowballResponsePrivate;

class QTAWSSNOWBALL_EXPORT SnowballResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SnowballResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SnowballResponse(SnowballResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SnowballResponse)
    Q_DISABLE_COPY(SnowballResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif

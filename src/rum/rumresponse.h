// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUMRESPONSE_H
#define QTAWS_RUMRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsrumglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Rum {

class RumResponsePrivate;

class QTAWSRUM_EXPORT RumResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    RumResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    RumResponse(RumResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RumResponse)
    Q_DISABLE_COPY(RumResponse)

};

} // namespace Rum
} // namespace QtAws

#endif

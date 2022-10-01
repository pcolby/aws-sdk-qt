// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NIMBLERESPONSE_H
#define QTAWS_NIMBLERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsnimbleglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Nimble {

class NimbleResponsePrivate;

class QTAWSNIMBLE_EXPORT NimbleResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    NimbleResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    NimbleResponse(NimbleResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NimbleResponse)
    Q_DISABLE_COPY(NimbleResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif

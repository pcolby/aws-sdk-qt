// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLYRESPONSE_H
#define QTAWS_POLLYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawspollyglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Polly {

class PollyResponsePrivate;

class QTAWSPOLLY_EXPORT PollyResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    PollyResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    PollyResponse(PollyResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PollyResponse)
    Q_DISABLE_COPY(PollyResponse)

};

} // namespace Polly
} // namespace QtAws

#endif

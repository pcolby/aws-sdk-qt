// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PIRESPONSE_H
#define QTAWS_PIRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawspiglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Pi {

class PiResponsePrivate;

class QTAWSPI_EXPORT PiResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    PiResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    PiResponse(PiResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PiResponse)
    Q_DISABLE_COPY(PiResponse)

};

} // namespace Pi
} // namespace QtAws

#endif

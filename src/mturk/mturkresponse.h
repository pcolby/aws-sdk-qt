// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MTURKRESPONSE_H
#define QTAWS_MTURKRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmturkglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MTurk {

class MTurkResponsePrivate;

class QTAWSMTURK_EXPORT MTurkResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MTurkResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MTurkResponse(MTurkResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MTurkResponse)
    Q_DISABLE_COPY(MTurkResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif

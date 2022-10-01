// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WISDOMRESPONSE_H
#define QTAWS_WISDOMRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawswisdomglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Wisdom {

class WisdomResponsePrivate;

class QTAWSWISDOM_EXPORT WisdomResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    WisdomResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    WisdomResponse(WisdomResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WisdomResponse)
    Q_DISABLE_COPY(WisdomResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif

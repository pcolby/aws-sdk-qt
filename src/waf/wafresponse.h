// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFRESPONSE_H
#define QTAWS_WAFRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawswafglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Waf {

class WafResponsePrivate;

class QTAWSWAF_EXPORT WafResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    WafResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    WafResponse(WafResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WafResponse)
    Q_DISABLE_COPY(WafResponse)

};

} // namespace Waf
} // namespace QtAws

#endif

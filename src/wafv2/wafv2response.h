// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFV2RESPONSE_H
#define QTAWS_WAFV2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawswafv2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Wafv2 {

class Wafv2ResponsePrivate;

class QTAWSWAFV2_EXPORT Wafv2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    Wafv2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    Wafv2Response(Wafv2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Wafv2Response)
    Q_DISABLE_COPY(Wafv2Response)

};

} // namespace Wafv2
} // namespace QtAws

#endif

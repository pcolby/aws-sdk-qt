// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RESPONSE_H
#define QTAWS_ROUTE53RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsroute53global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Route53 {

class Route53ResponsePrivate;

class QTAWSROUTE53_EXPORT Route53Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    Route53Response(QObject * const parent = 0);

protected:
    /// @cond internal
    Route53Response(Route53ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Route53Response)
    Q_DISABLE_COPY(Route53Response)

};

} // namespace Route53
} // namespace QtAws

#endif

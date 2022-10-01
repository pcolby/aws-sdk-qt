// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PRICINGRESPONSE_H
#define QTAWS_PRICINGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawspricingglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Pricing {

class PricingResponsePrivate;

class QTAWSPRICING_EXPORT PricingResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    PricingResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    PricingResponse(PricingResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PricingResponse)
    Q_DISABLE_COPY(PricingResponse)

};

} // namespace Pricing
} // namespace QtAws

#endif

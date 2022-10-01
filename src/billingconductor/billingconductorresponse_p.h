// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BILLINGCONDUCTORRESPONSE_P_H
#define QTAWS_BILLINGCONDUCTORRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class BillingConductorResponse;

class BillingConductorResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit BillingConductorResponsePrivate(BillingConductorResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BillingConductorResponse)
    Q_DISABLE_COPY(BillingConductorResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

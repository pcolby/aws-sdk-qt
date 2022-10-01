// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRESERVEDINSTANCESLISTINGRESPONSE_P_H
#define QTAWS_CANCELRESERVEDINSTANCESLISTINGRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CancelReservedInstancesListingResponse;

class CancelReservedInstancesListingResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CancelReservedInstancesListingResponsePrivate(CancelReservedInstancesListingResponse * const q);

    void parseCancelReservedInstancesListingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelReservedInstancesListingResponse)
    Q_DISABLE_COPY(CancelReservedInstancesListingResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESERVEDINSTANCESLISTINGRESPONSE_P_H
#define QTAWS_CREATERESERVEDINSTANCESLISTINGRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateReservedInstancesListingResponse;

class CreateReservedInstancesListingResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateReservedInstancesListingResponsePrivate(CreateReservedInstancesListingResponse * const q);

    void parseCreateReservedInstancesListingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReservedInstancesListingResponse)
    Q_DISABLE_COPY(CreateReservedInstancesListingResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

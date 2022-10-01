// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTRESERVATIONPURCHASEPREVIEWRESPONSE_P_H
#define QTAWS_GETHOSTRESERVATIONPURCHASEPREVIEWRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetHostReservationPurchasePreviewResponse;

class GetHostReservationPurchasePreviewResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetHostReservationPurchasePreviewResponsePrivate(GetHostReservationPurchasePreviewResponse * const q);

    void parseGetHostReservationPurchasePreviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHostReservationPurchasePreviewResponse)
    Q_DISABLE_COPY(GetHostReservationPurchasePreviewResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEADDRESSRESPONSE_P_H
#define QTAWS_ASSOCIATEADDRESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateAddressResponse;

class AssociateAddressResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateAddressResponsePrivate(AssociateAddressResponse * const q);

    void parseAssociateAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateAddressResponse)
    Q_DISABLE_COPY(AssociateAddressResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

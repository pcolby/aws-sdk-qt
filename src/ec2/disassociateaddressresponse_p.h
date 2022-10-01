// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEADDRESSRESPONSE_P_H
#define QTAWS_DISASSOCIATEADDRESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisassociateAddressResponse;

class DisassociateAddressResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisassociateAddressResponsePrivate(DisassociateAddressResponse * const q);

    void parseDisassociateAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateAddressResponse)
    Q_DISABLE_COPY(DisassociateAddressResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

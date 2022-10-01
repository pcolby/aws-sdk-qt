// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRUNKINTERFACERESPONSE_P_H
#define QTAWS_DISASSOCIATETRUNKINTERFACERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTrunkInterfaceResponse;

class DisassociateTrunkInterfaceResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisassociateTrunkInterfaceResponsePrivate(DisassociateTrunkInterfaceResponse * const q);

    void parseDisassociateTrunkInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateTrunkInterfaceResponse)
    Q_DISABLE_COPY(DisassociateTrunkInterfaceResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEIAMINSTANCEPROFILERESPONSE_P_H
#define QTAWS_DISASSOCIATEIAMINSTANCEPROFILERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisassociateIamInstanceProfileResponse;

class DisassociateIamInstanceProfileResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisassociateIamInstanceProfileResponsePrivate(DisassociateIamInstanceProfileResponse * const q);

    void parseDisassociateIamInstanceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateIamInstanceProfileResponse)
    Q_DISABLE_COPY(DisassociateIamInstanceProfileResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

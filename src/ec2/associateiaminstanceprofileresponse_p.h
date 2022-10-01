// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEIAMINSTANCEPROFILERESPONSE_P_H
#define QTAWS_ASSOCIATEIAMINSTANCEPROFILERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateIamInstanceProfileResponse;

class AssociateIamInstanceProfileResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateIamInstanceProfileResponsePrivate(AssociateIamInstanceProfileResponse * const q);

    void parseAssociateIamInstanceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateIamInstanceProfileResponse)
    Q_DISABLE_COPY(AssociateIamInstanceProfileResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

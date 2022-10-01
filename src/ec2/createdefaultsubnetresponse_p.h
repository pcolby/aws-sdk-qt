// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEFAULTSUBNETRESPONSE_P_H
#define QTAWS_CREATEDEFAULTSUBNETRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateDefaultSubnetResponse;

class CreateDefaultSubnetResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateDefaultSubnetResponsePrivate(CreateDefaultSubnetResponse * const q);

    void parseCreateDefaultSubnetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDefaultSubnetResponse)
    Q_DISABLE_COPY(CreateDefaultSubnetResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

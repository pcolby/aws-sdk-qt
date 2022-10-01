// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETRESPONSE_P_H
#define QTAWS_CREATESUBNETRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateSubnetResponse;

class CreateSubnetResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateSubnetResponsePrivate(CreateSubnetResponse * const q);

    void parseCreateSubnetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSubnetResponse)
    Q_DISABLE_COPY(CreateSubnetResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

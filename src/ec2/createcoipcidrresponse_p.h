// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOIPCIDRRESPONSE_P_H
#define QTAWS_CREATECOIPCIDRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateCoipCidrResponse;

class CreateCoipCidrResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateCoipCidrResponsePrivate(CreateCoipCidrResponse * const q);

    void parseCreateCoipCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCoipCidrResponse)
    Q_DISABLE_COPY(CreateCoipCidrResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOIPPOOLRESPONSE_P_H
#define QTAWS_CREATECOIPPOOLRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateCoipPoolResponse;

class CreateCoipPoolResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateCoipPoolResponsePrivate(CreateCoipPoolResponse * const q);

    void parseCreateCoipPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCoipPoolResponse)
    Q_DISABLE_COPY(CreateCoipPoolResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOIPPOOLUSAGERESPONSE_P_H
#define QTAWS_GETCOIPPOOLUSAGERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetCoipPoolUsageResponse;

class GetCoipPoolUsageResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetCoipPoolUsageResponsePrivate(GetCoipPoolUsageResponse * const q);

    void parseGetCoipPoolUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCoipPoolUsageResponse)
    Q_DISABLE_COPY(GetCoipPoolUsageResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

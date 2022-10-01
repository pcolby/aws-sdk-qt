// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEHOSTSRESPONSE_P_H
#define QTAWS_ALLOCATEHOSTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AllocateHostsResponse;

class AllocateHostsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AllocateHostsResponsePrivate(AllocateHostsResponse * const q);

    void parseAllocateHostsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AllocateHostsResponse)
    Q_DISABLE_COPY(AllocateHostsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

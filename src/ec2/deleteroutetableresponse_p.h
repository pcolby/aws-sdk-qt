// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTETABLERESPONSE_P_H
#define QTAWS_DELETEROUTETABLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteRouteTableResponse;

class DeleteRouteTableResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteRouteTableResponsePrivate(DeleteRouteTableResponse * const q);

    void parseDeleteRouteTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRouteTableResponse)
    Q_DISABLE_COPY(DeleteRouteTableResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

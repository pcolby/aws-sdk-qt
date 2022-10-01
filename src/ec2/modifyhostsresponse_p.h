// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYHOSTSRESPONSE_P_H
#define QTAWS_MODIFYHOSTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyHostsResponse;

class ModifyHostsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyHostsResponsePrivate(ModifyHostsResponse * const q);

    void parseModifyHostsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyHostsResponse)
    Q_DISABLE_COPY(ModifyHostsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

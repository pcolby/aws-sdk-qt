// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEHOSTSRESPONSE_P_H
#define QTAWS_RELEASEHOSTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ReleaseHostsResponse;

class ReleaseHostsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ReleaseHostsResponsePrivate(ReleaseHostsResponse * const q);

    void parseReleaseHostsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReleaseHostsResponse)
    Q_DISABLE_COPY(ReleaseHostsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

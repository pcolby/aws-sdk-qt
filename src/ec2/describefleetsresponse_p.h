// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETSRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeFleetsResponse;

class DescribeFleetsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeFleetsResponsePrivate(DescribeFleetsResponse * const q);

    void parseDescribeFleetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetsResponse)
    Q_DISABLE_COPY(DescribeFleetsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

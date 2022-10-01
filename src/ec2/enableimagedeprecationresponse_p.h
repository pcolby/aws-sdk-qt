// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEIMAGEDEPRECATIONRESPONSE_P_H
#define QTAWS_ENABLEIMAGEDEPRECATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class EnableImageDeprecationResponse;

class EnableImageDeprecationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit EnableImageDeprecationResponsePrivate(EnableImageDeprecationResponse * const q);

    void parseEnableImageDeprecationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableImageDeprecationResponse)
    Q_DISABLE_COPY(EnableImageDeprecationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

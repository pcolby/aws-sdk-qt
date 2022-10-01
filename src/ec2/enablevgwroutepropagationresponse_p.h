// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVGWROUTEPROPAGATIONRESPONSE_P_H
#define QTAWS_ENABLEVGWROUTEPROPAGATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class EnableVgwRoutePropagationResponse;

class EnableVgwRoutePropagationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit EnableVgwRoutePropagationResponsePrivate(EnableVgwRoutePropagationResponse * const q);

    void parseEnableVgwRoutePropagationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableVgwRoutePropagationResponse)
    Q_DISABLE_COPY(EnableVgwRoutePropagationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

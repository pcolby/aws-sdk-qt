// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTYPERESPONSE_P_H
#define QTAWS_DEREGISTERTYPERESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DeregisterTypeResponse;

class DeregisterTypeResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DeregisterTypeResponsePrivate(DeregisterTypeResponse * const q);

    void parseDeregisterTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterTypeResponse)
    Q_DISABLE_COPY(DeregisterTypeResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

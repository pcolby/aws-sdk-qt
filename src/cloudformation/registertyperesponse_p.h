// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTYPERESPONSE_P_H
#define QTAWS_REGISTERTYPERESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class RegisterTypeResponse;

class RegisterTypeResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit RegisterTypeResponsePrivate(RegisterTypeResponse * const q);

    void parseRegisterTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterTypeResponse)
    Q_DISABLE_COPY(RegisterTypeResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

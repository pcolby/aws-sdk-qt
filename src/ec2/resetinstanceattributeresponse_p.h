// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETINSTANCEATTRIBUTERESPONSE_P_H
#define QTAWS_RESETINSTANCEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ResetInstanceAttributeResponse;

class ResetInstanceAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ResetInstanceAttributeResponsePrivate(ResetInstanceAttributeResponse * const q);

    void parseResetInstanceAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetInstanceAttributeResponse)
    Q_DISABLE_COPY(ResetInstanceAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

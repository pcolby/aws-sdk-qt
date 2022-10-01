// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETFPGAIMAGEATTRIBUTERESPONSE_P_H
#define QTAWS_RESETFPGAIMAGEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ResetFpgaImageAttributeResponse;

class ResetFpgaImageAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ResetFpgaImageAttributeResponsePrivate(ResetFpgaImageAttributeResponse * const q);

    void parseResetFpgaImageAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetFpgaImageAttributeResponse)
    Q_DISABLE_COPY(ResetFpgaImageAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

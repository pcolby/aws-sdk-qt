// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETADDRESSATTRIBUTERESPONSE_P_H
#define QTAWS_RESETADDRESSATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ResetAddressAttributeResponse;

class ResetAddressAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ResetAddressAttributeResponsePrivate(ResetAddressAttributeResponse * const q);

    void parseResetAddressAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetAddressAttributeResponse)
    Q_DISABLE_COPY(ResetAddressAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

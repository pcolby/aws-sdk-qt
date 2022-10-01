// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYFPGAIMAGEATTRIBUTERESPONSE_P_H
#define QTAWS_MODIFYFPGAIMAGEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyFpgaImageAttributeResponse;

class ModifyFpgaImageAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyFpgaImageAttributeResponsePrivate(ModifyFpgaImageAttributeResponse * const q);

    void parseModifyFpgaImageAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyFpgaImageAttributeResponse)
    Q_DISABLE_COPY(ModifyFpgaImageAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

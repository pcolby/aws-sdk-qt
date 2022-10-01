// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIMAGEATTRIBUTERESPONSE_P_H
#define QTAWS_MODIFYIMAGEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyImageAttributeResponse;

class ModifyImageAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyImageAttributeResponsePrivate(ModifyImageAttributeResponse * const q);

    void parseModifyImageAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyImageAttributeResponse)
    Q_DISABLE_COPY(ModifyImageAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

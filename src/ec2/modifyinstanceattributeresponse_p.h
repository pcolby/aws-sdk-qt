// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEATTRIBUTERESPONSE_P_H
#define QTAWS_MODIFYINSTANCEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceAttributeResponse;

class ModifyInstanceAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyInstanceAttributeResponsePrivate(ModifyInstanceAttributeResponse * const q);

    void parseModifyInstanceAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceAttributeResponse)
    Q_DISABLE_COPY(ModifyInstanceAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

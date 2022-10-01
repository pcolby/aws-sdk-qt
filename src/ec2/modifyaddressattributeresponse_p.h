// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYADDRESSATTRIBUTERESPONSE_P_H
#define QTAWS_MODIFYADDRESSATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyAddressAttributeResponse;

class ModifyAddressAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyAddressAttributeResponsePrivate(ModifyAddressAttributeResponse * const q);

    void parseModifyAddressAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyAddressAttributeResponse)
    Q_DISABLE_COPY(ModifyAddressAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

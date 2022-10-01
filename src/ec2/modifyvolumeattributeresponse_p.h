// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVOLUMEATTRIBUTERESPONSE_P_H
#define QTAWS_MODIFYVOLUMEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVolumeAttributeResponse;

class ModifyVolumeAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVolumeAttributeResponsePrivate(ModifyVolumeAttributeResponse * const q);

    void parseModifyVolumeAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVolumeAttributeResponse)
    Q_DISABLE_COPY(ModifyVolumeAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

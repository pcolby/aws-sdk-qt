// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVOLUMERESPONSE_P_H
#define QTAWS_MODIFYVOLUMERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVolumeResponse;

class ModifyVolumeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVolumeResponsePrivate(ModifyVolumeResponse * const q);

    void parseModifyVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVolumeResponse)
    Q_DISABLE_COPY(ModifyVolumeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

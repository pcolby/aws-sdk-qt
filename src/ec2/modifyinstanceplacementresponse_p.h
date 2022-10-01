// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEPLACEMENTRESPONSE_P_H
#define QTAWS_MODIFYINSTANCEPLACEMENTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstancePlacementResponse;

class ModifyInstancePlacementResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyInstancePlacementResponsePrivate(ModifyInstancePlacementResponse * const q);

    void parseModifyInstancePlacementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyInstancePlacementResponse)
    Q_DISABLE_COPY(ModifyInstancePlacementResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

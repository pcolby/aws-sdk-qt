// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEEVENTWINDOWRESPONSE_P_H
#define QTAWS_MODIFYINSTANCEEVENTWINDOWRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceEventWindowResponse;

class ModifyInstanceEventWindowResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyInstanceEventWindowResponsePrivate(ModifyInstanceEventWindowResponse * const q);

    void parseModifyInstanceEventWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceEventWindowResponse)
    Q_DISABLE_COPY(ModifyInstanceEventWindowResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

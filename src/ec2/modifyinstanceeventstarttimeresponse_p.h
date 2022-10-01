// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEEVENTSTARTTIMERESPONSE_P_H
#define QTAWS_MODIFYINSTANCEEVENTSTARTTIMERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceEventStartTimeResponse;

class ModifyInstanceEventStartTimeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyInstanceEventStartTimeResponsePrivate(ModifyInstanceEventStartTimeResponse * const q);

    void parseModifyInstanceEventStartTimeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceEventStartTimeResponse)
    Q_DISABLE_COPY(ModifyInstanceEventStartTimeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

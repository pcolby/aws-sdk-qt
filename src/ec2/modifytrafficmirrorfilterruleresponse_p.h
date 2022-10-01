// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRAFFICMIRRORFILTERRULERESPONSE_P_H
#define QTAWS_MODIFYTRAFFICMIRRORFILTERRULERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyTrafficMirrorFilterRuleResponse;

class ModifyTrafficMirrorFilterRuleResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyTrafficMirrorFilterRuleResponsePrivate(ModifyTrafficMirrorFilterRuleResponse * const q);

    void parseModifyTrafficMirrorFilterRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyTrafficMirrorFilterRuleResponse)
    Q_DISABLE_COPY(ModifyTrafficMirrorFilterRuleResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

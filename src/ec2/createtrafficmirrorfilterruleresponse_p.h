// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORFILTERRULERESPONSE_P_H
#define QTAWS_CREATETRAFFICMIRRORFILTERRULERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorFilterRuleResponse;

class CreateTrafficMirrorFilterRuleResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTrafficMirrorFilterRuleResponsePrivate(CreateTrafficMirrorFilterRuleResponse * const q);

    void parseCreateTrafficMirrorFilterRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrafficMirrorFilterRuleResponse)
    Q_DISABLE_COPY(CreateTrafficMirrorFilterRuleResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

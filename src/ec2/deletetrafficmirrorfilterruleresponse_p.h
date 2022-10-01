// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORFILTERRULERESPONSE_P_H
#define QTAWS_DELETETRAFFICMIRRORFILTERRULERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorFilterRuleResponse;

class DeleteTrafficMirrorFilterRuleResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTrafficMirrorFilterRuleResponsePrivate(DeleteTrafficMirrorFilterRuleResponse * const q);

    void parseDeleteTrafficMirrorFilterRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrafficMirrorFilterRuleResponse)
    Q_DISABLE_COPY(DeleteTrafficMirrorFilterRuleResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

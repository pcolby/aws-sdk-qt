// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATETARGETINSTANCESRESPONSE_P_H
#define QTAWS_TERMINATETARGETINSTANCESRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class TerminateTargetInstancesResponse;

class TerminateTargetInstancesResponsePrivate : public MgnResponsePrivate {

public:

    explicit TerminateTargetInstancesResponsePrivate(TerminateTargetInstancesResponse * const q);

    void parseTerminateTargetInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateTargetInstancesResponse)
    Q_DISABLE_COPY(TerminateTargetInstancesResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif

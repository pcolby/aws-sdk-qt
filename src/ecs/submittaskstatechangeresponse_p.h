// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITTASKSTATECHANGERESPONSE_P_H
#define QTAWS_SUBMITTASKSTATECHANGERESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class SubmitTaskStateChangeResponse;

class SubmitTaskStateChangeResponsePrivate : public EcsResponsePrivate {

public:

    explicit SubmitTaskStateChangeResponsePrivate(SubmitTaskStateChangeResponse * const q);

    void parseSubmitTaskStateChangeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SubmitTaskStateChangeResponse)
    Q_DISABLE_COPY(SubmitTaskStateChangeResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif

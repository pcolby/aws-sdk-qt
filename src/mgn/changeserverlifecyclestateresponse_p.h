// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGESERVERLIFECYCLESTATERESPONSE_P_H
#define QTAWS_CHANGESERVERLIFECYCLESTATERESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class ChangeServerLifeCycleStateResponse;

class ChangeServerLifeCycleStateResponsePrivate : public MgnResponsePrivate {

public:

    explicit ChangeServerLifeCycleStateResponsePrivate(ChangeServerLifeCycleStateResponse * const q);

    void parseChangeServerLifeCycleStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChangeServerLifeCycleStateResponse)
    Q_DISABLE_COPY(ChangeServerLifeCycleStateResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
